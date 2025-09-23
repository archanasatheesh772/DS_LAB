#include<stdio.h>
int main()
{
int m,n,i,j,k;
printf("enter the number of rows and column of the matrices:");
scanf("%d %d",&m,&n);
int A[m][n],B[m][n],sum[m][n],sub[m][n],mul[m][n];
printf("enter elements of matrix A:\n");
//input matrixA
for(i=0;i<m;i++)
for(j=0;j<n;j++)
scanf("%d",&A[i][j]);
//input matrix B
printf("enter element of matrix B:\n");
for(i=0;i<m;i++)
for(j=0;j<n;j++)
scanf("%d",&B[i][j]);
//addition
for(i=0;i<m;i++)
for(j=0;j<n;j++)
sum[i][j]=A[i][j] + B[i][j];
//subtraction
for(i=0;i<m;i++)
for(j=0;j<n;j++)
sub[i][j]=A[i][j] - B[i][j];

if(m==n)
{
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
mul[i][j]=0;

for(k=0;k<n;k++)
{
mul[i][j]+=A[i][k]+B[k][j];
}
}
}
}
//output results
printf("/n Matrix Addition:");
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
printf("%d",sum[i][j]);
printf("/n");
}

printf("/n Matrix subtraction:");
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
printf("%d",sub[i][j]);
printf("/n");
}
if(m==n)
{
printf("/n matrix multiplication:/n");
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
printf("%d",mul[i][j]);
printf("/n");
}
}
else
{
printf("/n matrix multiplication not possible(not square matrices)\n");
}
return 0;
}















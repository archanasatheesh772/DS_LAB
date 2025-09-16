#include<stdio.h>
int main()
{
int i,n,key,found=0;
printf("enter the number of elements:");
scanf("%d",&n);
int a[n];
printf("enter the %d elements:\n",n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("enter elements to search:");
scanf("%d",&key);
for(i=0;i<n;i++)
{
if(a[i]==key)
{
printf("element %d is found the position%d\n",key,i+1);
found=1;
break;
}
}
if(found==0)
{
printf("element %d is not found in array\n",key);
}
return 0;
}

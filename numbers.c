#include<stdio.h>
void main()
{
int a[50],i,n;
printf("Enter the range:");
scanf("%d",&n);
printf("Enter the numbers:");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("Enter the elements are:");
for(i=0;i<n;i++)
{
printf("%d",a[i]);
}
}


#include<stdio.h>
void main()
{
int a[100],n,i,temp,j;
printf("enter the range:");
scanf("%d",&n);
printf("enter the elements:");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n-1;i++)
{
for(j=0;j<n-1;j++)
{
if(a[j]>a[j+1])
{
temp=a[j];
a[j]=a[j+1];
a[j+1]=temp;
}
}
}
printf("sorted array:");
for(i=0;i<n;i++)
{
printf("%d",a[i]);
}
}

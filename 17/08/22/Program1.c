# progrms#include<stdio.h>
void main()
{
int a[10],n,i,c=0;
printf("enter n value: ");
scanf("%d",&n);
for(i=0;i<n;i++)
scanf("%d",&a[i]);
for(i=0;i<n;i++)
{
if(a[i]<0)
c++;
}
if(c==0)
printf("DIFFERENT");
else
printf("UNIQUE");
}

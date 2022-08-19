# progrms#include<stdio.h>
int main()
{
	int a[10],i,n,f,s=0,k;
	printf("enter n value\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	{
		f=1;
		k=a[i];
		while(k>0)
		{
			f=f*k;
			k--;
		}
		s=s+f;
		
	}
	printf("%d",s);
	
}

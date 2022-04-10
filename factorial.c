#include<stdio.h>
int main()
{
int i,n,s=1;
	printf("enter the number :");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		s=s*i;
	}
		printf("%d",s);
	return 0;
}

#include <stdio.h>
#include <math.h>
int main()
{
	int n,m,t,r=0,count=0;
	printf("Enter an integer :");
	scanf("%d",&n);
	m=n;
	while(m!=0){
		m=m/10;
		++count;
	}
	m=n;
	while(m!=0){
		t=m%10;
		r=r+pow(t,count);
		m=m/10;
	}
	if(r==n)
	printf("%d is an armstrong number",n);
	else
	printf("%d is not ",n);
	return 0;
}


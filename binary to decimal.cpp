#include<stdio.h>
main()
{
	int n,dn=0,b=1,t;
	printf("enter the binary num :");
	scanf("%d",&n);
	while(n>0){
		t=n%10;
		dn=dn+t*b;
		n=n/10;
		b=b*2;
	}
	printf("The decimal number is %d",dn);
	return 0;
}

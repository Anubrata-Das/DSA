#include<stdio.h>
int main()
{
    int n,q,r=0,s=1;
    printf("Enter a binary number");
    scanf("%d",&n);
    while(n!=0)
    {
        q=n%10;
        r=r+q*s;
        n=n/10;
        s=s*2;
    }
    printf("%d is a equivalent decimal",r);
    return 0;
}

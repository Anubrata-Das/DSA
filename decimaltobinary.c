#include<stdio.h>

int main(){
    int a[100];
    int n,i=0,s=0,t;
    printf("Enter a decimal value :");
    scanf("%d",&n);
    while (n>0)
    {
        t=n%2;
        a[i]=t;
        n=n/2;
        i++;
    }
    for ( i = i-1; i >=0; i--)
    {
        s=s*10+a[i];
    }
    printf("%d",s);
    
    return 0;
}
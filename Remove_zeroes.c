#include <stdio.h>

int main(){
    int n,r,num=0,s=0;
    printf("Enter any number:\n");
    scanf("%d",&n);

    while(n>0){
        r=n%10;
        n=n/10;
        if(r!=0){
            num=num*10+r;
        }
    }
    while(num>0){
        r=num%10;
        s=s*10+r;
        num=num/10;
    }

    printf("%d",s);
    return 0;
}
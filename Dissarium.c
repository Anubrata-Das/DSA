#include <stdio.h>
#include <math.h>

int main(){
    int len=0,s=0,n,r,x;
    printf("Enter a number: \n");
    scanf("%d",&n);
    x=n;
    while(x!=0){
        x=x/10;
        len++;
    }
    x=n;
    while(n!=0){
        r=n%10;
        s+=pow(r,len);
        n=n/10;
        len--;
    }
    if(x==s){
        printf("%d is an dissarium number\n",x);
    }
    else{
        printf("%d is NOT an dissarium number\n",x);
    }
    return 0;
}
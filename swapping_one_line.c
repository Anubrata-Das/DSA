#include <stdio.h>

int main(){
    int a,b;
    a=50;
    b=100;
    b=(a+b)-(a=b);
    printf("%d %d",a,b);
    return 0;
}
#include <stdio.h>

int main(){
    int a,b,c,max;
    printf("Enter 1st number\n");
    scanf("%d", &a);
    printf("Enter 2nd number\n");
    scanf("%d", &b);
    printf("Enter 3rd number\n");
    scanf("%d", &c);
    max =(a>b)?((a>c)?a:c):((b>c)?b:c);
    printf("Max is %d", max);
    return 0;
}
#include <stdio.h>

int main(){
    int a,b,c;
    printf("Enter three numbers.\n");
    scanf("%d%d%d",&a,&b,&c);
    
    if(a>=b && a>=c){
        if(b>=c){
            printf("Second maximum number is : %d",b);
        }
        else
            printf("Second maximum number is : %d",c);
    }
    else if(b>=a && b>=c){
        if(a>=c)
            printf("Second maximum number is : %d",a);
        else
            printf("Second maximum number is : %d",c);
    }
    else if(c>=a && c>=b){
        if(a>=b)
            printf("Second maximum number is : %d",a);
        else
            printf("Second maximum number is : %d",b);
    }
    return 0;
}
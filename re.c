#include <stdio.h>

int fun(int a,int b){
    if(a<3){
        return b+fun(a+a,b+b);
    }
    return a+b;
}
int main(){
    int a=1,b=1;
    int s;
    s=fun(a,b);
    printf("%d",s);

    
}
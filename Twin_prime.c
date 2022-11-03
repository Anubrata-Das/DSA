#include <stdio.h>

int main(){
    int num=3,s1=0,s2=0,i,n;
    printf("Enter the TERM upto print the series\n");
    scanf("%d", &n);

    for(;num<=n;num++){
        for(i=2;i<=num;i++){
            if(num%i==0){
                break;
            }
        }
        if(num==i){
            s1=num;
            num++;
            if(s1-s2==2){
                printf("%d,%d ",s2,s1);
            }
            s2=s1;
        }
    }
    return 0;
}
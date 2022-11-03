#include <stdio.h>

int main(){
    int i,j,s,n;
    printf("Enter no. of rows\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        if(i==n){
            for(j=1;j<=(2*i-1);j++){
                printf("*");
            }
            break;
        }
        for(s=n+1;s>=(i+2);s--){
            printf(" ");
        }
        for(j=1;j<=(2*i-1);j++){
            if(j+1>(2*i-1)){
                printf("*");
                continue;
            }
            if(j==1){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
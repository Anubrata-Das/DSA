#include <stdio.h>

int main(){
    int i,j,s,n;
    printf("Enter no. of rows in odd number\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        if(i<=(n/2)+1){
            for(s=(n/2);s>=i;s--){
                printf(" ");
            }
            for(j=1;j<=(2*i-1);j++){
                printf("*");
            }
            printf("\n");
        }
        else{
            for(s=n/2;s>=((n-i)+1);s--){
                printf(" ");
            }
            for(j=1;j<=2*(n-i)+1;j++){
                printf("*");
            }
            printf("\n");
        }
    }
    return 0;
}
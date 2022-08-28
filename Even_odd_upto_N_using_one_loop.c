#include <stdio.h>

int main(){
    int i=1,j=1,fg=0,n;
    printf("Enter number of terms:\n");
    scanf("%d",&n);
    for(;i<=n || j<=n;i++){
        if(i>n){
            fg=1;
        }
        if(i%2==0 && i<=n){
            printf("%d ",i);
            fg=0;
            continue;
        }
        if(j%2 !=0 && fg==1){
            printf("%d ",j);
            j=j+2;
        }
    }
    return 0;
}
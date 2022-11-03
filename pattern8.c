#include <stdio.h>

int main(){
    int x,y,n,j,k,num,c;
    num=1,k=0;
    printf("Enter no. of rows\n");
    scanf("%d",&n);
    for(x=1;x<=n;x++){
        k++;
        if(x%2==0){
            for(y=1;y<=x;y++){
                num++;
            }
            c=num-1;
            for(j=1;j<=k;j++){
                printf("%d ",c);
                c--;
            }
            printf("\n");
        }
        else{
            for(y=1;y<=x;y++){
                printf("%d ",num);
                num++;
            }
            printf("\n");
        }
    }
    return 0;
}
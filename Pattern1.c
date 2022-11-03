// #include <stdio.h>

// int main(){
//     int i,j,s;
//     for( i=1;i<=5;i++){
//         for( j=1;j<=i;j++){
//             printf("%d",j);
//         }
//         for( s=7;s>=(i*2)-1;s--){
//             printf(" ");
//         }
//         if(i==5){
//             j=i-1;
//         }
//         else
//             j=i;
//         for(;j>=1;j--){
//             printf("%d",j);
//         }
//         printf("\n");
//     }
//     return 0;
// }

#include <stdio.h>

int main(){
    int i,j,s,n;
    printf("Enter no. of rows\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        if(i==n){
            for(j=1;j<=(2*i-1);j++){
                printf("1");
            }
            break;
        }
        for(s=n+1;s>=(i+2);s--){
            printf(" ");
        }
        for(j=1;j<=(2*i-1);j++){
            if(j+1>(2*i-1)){
                printf("1");
                continue;
            }
            if(j==1){
                printf("1");
            }
            else{
                printf("0");
            }
        }
        printf("\n");
    }
    return 0;
}
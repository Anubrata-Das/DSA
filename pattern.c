#include <stdio.h>

int main(){

    char*p="deltax";
    char c;
    for(int i = 0;i<=3;i++){
        c=*p++;
    }
    printf("%c",c);

    char *ptr[]={"0"};
    printf("%c",*ptr);


    // int i,j;
    // for(i=1;i<=5;i++){
    //     for(j=1;j<=i;j--){
    //         printf("%d ",j);
    //     }
    //     printf("\n");
    // }

    // int i,j;
    // for(i=1;i<=5;i++){
    //     for(j=1;j<=i;j++){
    //         if(j%2==0){
    //             printf("%d ",0);
    //         }
    //         else{
    //             printf("%d ",1);
    //         }
    //     }
    //     printf("\n");
    // }

    // int i,j;
    // for(i=1;i<=5;i++){
    //     for(j=1;j<=i;j++){
    //         if(i%2==0){
    //             printf("%d ",i);
    //         }
    //         else{
    //             printf("%d",j);
    //         }
    //     }
    // }
    return 0;
}
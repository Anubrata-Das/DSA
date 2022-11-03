#include <stdio.h>

int main(){
    int n,max,max1,i;
    printf("Enter the length of the array\n");
    scanf("%d",&n);
    int arr[n];
    max=-1;
    max1=-1;
    for(i=0;i<n;i++){
        printf("Enter %d th value\n",i+1);
        scanf("%d",&arr[i]);
    }
    printf("Array is\n");
    for(i=0;i<n;i++){
        printf("%d  ",arr[i]);
    }

    for(i=0;i<n;i+=2){
        if(arr[i]>max)
            max=arr[i];
    }
    printf("\nThe maximum in odd position is : %d\n",max);
    for(i=1;i<n;i+=2){
        if(arr[i]>max1)
            max1=arr[i];
    }
    printf("The maximum in even position is : %d\n",max1);
    printf("The sum of %d and %d is : %d",max,max1,(max+max1));
    return 0;
}
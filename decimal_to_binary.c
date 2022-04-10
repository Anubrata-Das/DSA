#include <stdio.h>
int main() 
{
    int a[10], n, i, j;
    printf("Enter the number:\n");
    scanf("%d", &n);
    for(i = 0; n > 0; i++)
    {
        a[i] = n % 2;
        n = n / 2;
    }
    for(j = i - 1; j >= 0; j--)  {
        printf("%d ", a[j]);
    }
    return 0;
}
#include <stdio.h>
int sum = 0, rem;
int rev(int);
int main()
{
    int num;
    printf("Enter a number:\n");
    scanf("%d", &num);
    printf("-------------------------\n");
    printf("Reverse number is\n");
    rev(num);
    return 0;
}
int rev(int num)
{
    if (num)
    {
        rem = num % 10;
        printf("%d",rem);
        sum = sum * 10 + rem;
        rev(num / 10);
    }
    else
        return sum;
}
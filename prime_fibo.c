#include <stdio.h>
int main()
{
    int i, j, k, n, num, f0 = 0, f1 = 1, f2, count = 0;
    printf("Enter number of terms:\t");
    scanf("%d", &n);
    printf("\n-------------------------------------------------------------------------------------------------------------------------------\n");
    for (num = 1; num <=n; num++)
    {
        for (j = 2; j <= num; j++)
        {
            if (num % j == 0)
                break;
        }
        if (num == j)
        {
            printf(" %d-p ", num);
            count=0;
            printf(" %d-f ", f0);
            f2 = f0 + f1;
            f0 = f1;
            f1 = f2;
        }
        else
            count++;
        if(count > 1)
            n++;
    }
    return 0;
}
#include <stdio.h>

int fact(int n)
{
    printf("Called: %d\n",n);
    if (n == 0)
    {
        printf("n0-->called\n");
        return 0;
    }
    if (n == 1)
    {
        printf("n1-->called\n");
        return 1;
    }
    else
    {
        printf("else called.\n");
        return (fact(n - 1) + fact(n - 2));
    }
}

int main()
{
    fact(3);
    return 0;
}
#include <stdio.h>

int main()
{
    int iw, ew, i, j;
    float inner, outer, total, s1 = 0, s2 = 0;
    printf("Enter number of interior walls\n");
    scanf("%d", &iw);
    printf("Enter number of exterior walls\n");
    scanf("%d", &ew);

    for (i = 1; i <= iw; i++)
    {
        printf("Enter surface area(interior) of wall%d\n", i);
        scanf("%f", &inner);
        s1 = s1 + inner;
    }
    for (j = 1; j <= ew; j++)
    {
        printf("Enter surface area(exterior) of wall%d\n", j);
        scanf("%f", &outer);
        s2 = s2 + outer;
    }
    total = s1 * 18 + s2 * 12;

    printf("Total cost is %0.1f", total);
    return 0;
}
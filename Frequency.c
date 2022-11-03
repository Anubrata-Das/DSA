#include <stdio.h>

int main()
{
    int arr[] = {10, 20, 30, 20, 30, 20, 10, 50, 50, 60, 50, 10, 50};
    int len = sizeof(arr) / sizeof(int);
    int i, j, c;
    int fr[len];
    int fg = -1;
    for (i = 0; i < len; i++)
    {
        c = 1;
        for (j = i + 1; j < len; j++)
        {
            if (arr[i] == arr[j])
            {
                c++;
                fr[j] = fg;
            }
        }
        if (fr[i] != fg)
        {
            fr[i] = c;
        }
    }

    for (i = 0; i < len; i++)
    {
        if (fr[i] != fg)
        {
            printf("%d is present %d times\n", arr[i], fr[i]);
        }
    }
    return 0;
}
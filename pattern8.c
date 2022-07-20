#include <stdio.h>
int main()
{
    int i, j, k = 1;
    int l, r = 0;
    for (i = 0; i <= 3; i++)
    {
        for (j = 0; j <= 6; j++)
        {
            if (j >= 3 - i && j <= 3 + i)
            {
                if (j <= 3)
                {
                    printf("%d", k);
                    k++;
                }
                else
                {
                    printf("%d", l);
                    l--;
                }
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
        r++;
        l = r;
        k = 1;
    }
    return 0;
}
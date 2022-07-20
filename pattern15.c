#include <stdio.h>
int main()
{
    int k = -1;

    for (int i = 0; i < 9; i++)
    {
        if (i <= 3)
        {
            k++;
        }
        else if (i == 4)
        {
            k = 4;
        }
        else
        {
            k--;
        }
        for (int j = 0; j < 9; j++)
        {
            if (i <= 3)
            {
                if (j <= 3 - k || j >= 5 + k)
                {
                    printf(" ");
                }
                else
                {
                    printf("*");
                }
            }
            else if (i == 4)
            {
                printf("*");
            }

            else if (i >= 5)
            {
                if (j <= 3 - k || j >= 5 + k)
                {
                    printf(" ");
                }
                else
                {
                    printf("*");
                }
            }
        }

        printf("\n");
    }
}
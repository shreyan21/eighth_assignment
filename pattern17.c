#include <stdio.h>

int main()
{
    int i, j;
    char k;
    for (i = 0; i <= 6; i++)
    {
        k = 'A';
        for (j = 0; j <= 12; j++)
        {
            if (j >= 7 - i && j <= 5 + i)
            {
                if (j == 7)
                {
                    k = 'E';
                }
                else if (j > 7)
                {
                    k--;
                }
                printf(" ");
            }
            else
            {
                if (j == 7)
                {
                    k = 'F';
                    printf("%c", k--);
                }
                else if (j > 7)
                {
                    printf("%c", k--);
                }
                else if (j <= 6)
                {
                    printf("%c", k++);
                }
            }
        }
        printf("\n");
    }
}
#include<stdio.h>
int main()
{
    int i,j;
    for(i=0;i<5;i++)
    {
        for(j=0;j<9;j++)
        {
            if(j>=4-i&&j<=4+i)
            {   
                if(j>=5-i&&j<=3+i&&i>0&&i<4)
                printf(" ");
                else
            printf("*");
            }
            else
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}
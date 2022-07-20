#include<stdio.h>
int main()
{
    int i,j;
    char c='A';
    char a=64,b;
    
    for(i=0;i<5;i++)
    {
        for(j=0;j<9;j++)
        {
            if(j>=4-i&&j<=4+i)
            {
                if(j<=4)
                {
                   printf("%c",c);
                   c++;
                }
                else
                {
                     printf("%c",b--);
                }
            }
            else
            printf(" ");
        }
        a++;
        b=a;
        c='A';
        printf("\n");
    }
    return 0;
}
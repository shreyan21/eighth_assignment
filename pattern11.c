#include<stdio.h>
int main()
{
    int i,j;
    char l='C',m='C';
    char k='A';
    for(i=0;i<=3;i++)
    {
        for(j=0;j<=6;j++)
        {
            if(j>=i&&j<=6-i)
            {
                if(j<=3)
                {
                    printf("%c",k++);
                }
                else
                {
                    printf("%c",m);
                    m--;
                }
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
        l--;
        m=l;
        k='A';
    }

}
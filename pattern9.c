#include<stdio.h>
int main()
{
    int i,j,k=1,l=3,m=3;
    for(i=0;i<=3;i++)
    {
        for(j=0;j<=6;j++)
        {
            if(j>=i&&j<=6-i)
            {
                if(j<=3)
                {
                    printf("%d",k++);
                }
                else
                {
                    printf("%d",m);
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
        k=1;
    }

}
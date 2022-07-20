#include<stdio.h>
int main()
{
    int i,j,k;
    for(i=0;i<4;i++)
    {  
        k=1;
        for(j=0;j<7;j++)
        {
            if(j>=4-i&&j<=i+2)
            {  
                if(j==4)
                {
                    k=2;
                }
                else if(j>4)
                {
                    k--;
                }

                printf(" ");
            }
            else
            {  
                if(j==4)
                {
                    k=3;
                    printf("%d",k--);
                }
               else if(j>4)
                {
                    printf("%d",k--);
                }
                else if(j<=3)
                {
                 printf("%d",k++);
                }
            }
           
        }
        printf("\n");
    }
}
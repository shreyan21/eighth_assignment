#include<stdio.h>
int main()
{
    int i,j;
    for(i=0;i<=4;i++)
    {
        for(j=0;j<=8;j++)
        {  
            if(j<=i-1||j>=9-i)
            {
                printf(" ");
            }
            else
            {   
                if(i>=1&&i<=3&&j>=i+1&&j<=7-i)
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
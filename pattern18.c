#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j;
    char a[]="MySirG";
    int k=0;
    for(i=0;i<=12;i++)
    {
        for(j=0;j<=19;j++)
        {
            if(i<=2)
            {

                if(j>=2-i&&j<=6+i||j>=13-i&&j<=17+i)
                {
                    printf("*");
                }
                else
                {
                    printf(" ");
                }
            }
            else if(i==3)
            {
                if(j>=7&&j<=12)
                {
                    printf("%c",a[k++]);
                }
                else
                {
                    printf("*");
                }
            }
            else if(i>3)
            {
                if(j<=i-4||j>=23-i)
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
    getch();
}
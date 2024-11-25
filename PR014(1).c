//This program is prepared by 24CE035

#include<stdio.h>

int main()
{
    int i,j,k,z;

    for(i=1; i<=5; i++)
    {
        for(j=5-i; j>=1; j--)
        {
            printf("  ");
        }

        for(k=1; k<=i; k++)
        {
            printf(" %d",k);
        }
        printf("\n");
    }
    printf("\n24CE035_Yash");
    return 0;
}


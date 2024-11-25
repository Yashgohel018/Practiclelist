//This program is prepared by 24CE035.

#include<stdio.h>
void ptr(int *,int *);
int main()
{
    int a,b;
    int *p,*q;
    p=&a;
    q=&b;
    printf("Enter the first amount =");
    scanf("%d",&a);
    printf("\nEnter the second amount=");
    scanf("%d",&b);
    int temp=*p;
    *p=*q;
    *q=temp;
    printf(" \n1st amount =%d",a);
    printf(" \n2nd amount =%d",b);
    printf("\n24CE035_Yash");
}


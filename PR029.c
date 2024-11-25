//This program is prepared by 24CE035

#include<stdio.h>
#include<stdlib.h>
int main()
{
    char *a;
    int i,n;
    printf("Enter the size of string you want to create : ");
    scanf("%d",&n);
    a=(char*)calloc(n,sizeof(char));
    printf("\n Enter your string : ");
    scanf("%s",a);
    puts(a);
//modifying string size
    printf("\n Enter new size of the string : ");
    scanf("%d",&n);
    a=(char*)realloc(a,n*sizeof(char));
    printf("\n Enter your new string : ");
    scanf("%s",a);
    puts(a);
    free(a);
    printf("\n24CE035_Yash");
}

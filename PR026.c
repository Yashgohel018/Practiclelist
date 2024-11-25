//This program is prepared by 24CE035

#include<stdio.h>
#include<string.h>
void display();
struct coach
{
    int age;
    int exp;
} c;
struct team
{
    char tname[20];
    char name[20];
    char type[20];
    struct coach c;
} t;
int main()
{
    printf("Enter team name :");
// fflush(stdin);
    gets(t.tname);
    printf("Enter Sport Type (e.g., basketball, football) :");
// fflush(stdin);
    gets(t.type);
    printf("Enter team coach name :");
// fflush(stdin);
    gets(t.name);
    printf("Enter Coach Age :");
    scanf("%d",&t.c.age);
    printf("Enter Coach experience :");
    scanf("%d",&t.c.exp);
    display();
}
void display()
{
    printf("------------------------------------------------------\n");
    printf("The Team name is : %s.\n",t.tname);
    printf("The Team type is : %s.\n",t.type);
    printf("The Coach name is : %s.\n",t.name);
    printf("The coach age is : %d.\n",t.c.age);
    printf("The coach experience is %d.\n",t.c.exp);
    printf("\n24CE035_Yash");
}

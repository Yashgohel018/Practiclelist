// This program is prepared by 24CE035.

#include <stdio.h>
#include <string.h>

// Define the union for Book
union book {
    int num;
    char title[50];
    char name[50];
    int price;
    int flag;
} b;

int main() {
    printf("Enter library accession number: ");
    scanf("%d", &b.num);
    printf("\nLibrary accession number is: %d.\n", b.num);

    // Use getchar to clear the input buffer
    getchar();

    // Using gets to read title
    printf("Enter title of the book: ");
    gets(b.title);
    printf("\nTitle of the book is: %s.\n", b.title);

    // Clear the input buffer using fflush(stdin)
    fflush(stdin);

    // Using gets to read author's name
    printf("Enter book Author Name: ");
    gets(b.name);
    printf("\nBook Author Name is: %s.\n", b.name);

    // Clear the input buffer using fflush(stdin)
    fflush(stdin);

    // Reading price
    printf("Enter the price of the book: ");
    scanf("%d", &b.price);
    printf("\nThe price of the book is: %d.\n", b.price);

    // Clear the input buffer using fflush(stdin)
    fflush(stdin);

    // Reading flag
    printf("Enter flag of the book (enter 0 for not issued and enter 1 for issued): ");
    scanf("%d", &b.flag);
    if (b.flag == 1) {
        printf("Your book is issued.\n");
    } else {
        printf("Your book is not issued.\n");
    }

    printf("\n24CE035_Yash\n");

    return 0;
}


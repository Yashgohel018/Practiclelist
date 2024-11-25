//This programe is prepared by 24CE

#include <stdio.h>

// Creating the structure to store book details
struct BookDetail {
    char title[100];
    char author[100];
    float amount;
};

// Function to display book details
void displayBookDetail(struct BookDetail book) {
    printf("Book Title: %s\n", book.title);
    printf("Author Name: %s\n", book.author);
    printf("Amount: %.2f\n", book.amount);
}

int main() {
    struct BookDetail book;

    // Input book details
    printf("Enter book title: ");
    fgets(book.title, sizeof(book.title), stdin);

    printf("Enter author name: ");
    fgets(book.author, sizeof(book.author), stdin);

    printf("Enter amount: ");
    scanf("%f", &book.amount);

    // Display book details
    displayBookDetail(book);

    printf("\n24CE035_Yash");
    return 0;
}


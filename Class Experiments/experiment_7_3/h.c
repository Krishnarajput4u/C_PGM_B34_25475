#include <stdio.h>

// Define the Book structure
struct Book {
    int book_id;
    char title[100];
    char author[100];
    float price;
};

// Function to display book details
void printBookDetails(struct Book b) {
    printf("\n--- Book Details ---\n");
    printf("Book ID   : %d\n", b.book_id);
    printf("Title     : %s\n", b.title);
    printf("Author    : %s\n", b.author);
    printf("Price     : ₹%.2f\n", b.price);
}

int main() {
    struct Book myBook;

    // Input book details
    printf("Enter Book ID: ");
    scanf("%d", &myBook.book_id);
    printf("Enter Title: ");
    scanf(" %[^\n]", myBook.title);  // Reads full title including spaces
    printf("Enter Author Name: ");
    scanf(" %[^\n]", myBook.author); // Reads full author name including spaces
    printf("Enter Price: ");
    scanf("%f", &myBook.price);

    // Pass structure to function
    printBookDetails(myBook);

    return 0;
}

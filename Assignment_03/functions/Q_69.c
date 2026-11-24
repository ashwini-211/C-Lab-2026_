#include <stdio.h>

// 1. Create a simple blueprint for a Book
struct Book {
    char title[50];
    float price;
};

// 2. Function to read info using a pointer (*)
void getBook(struct Book *b) {
    printf("Enter book title: ");
    scanf("%s", b->title); // Notice the arrow (->) because b is a pointer

    printf("Enter book price: ");
    scanf("%f", &b->price);
}

// 3. Function to display info using a pointer (*)
void showBook(struct Book *b) {
    printf("\n--- Here is your book! ---\n");
    printf("Title : %s\n", b->title);
    printf("Price : $%.2f\n", b->price);
}

int main() {
    struct Book myBook; // Create a regular book variable

    // Send the memory address (&) of the book to our functions
    getBook(&myBook);
    showBook(&myBook);

    return 0;
}

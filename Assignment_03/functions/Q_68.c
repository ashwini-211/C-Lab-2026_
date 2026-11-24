#include <stdio.h>
#include <string.h>

struct Book {
    int id;
    char title[100];
    char author[50];
    float price;
};

void readBook(struct Book *b) {
    printf("Enter Book ID: ");
    scanf("%d", &b->id);
    
    // Consume the newline character left in the buffer by scanf
    getchar(); 

    printf("Enter Book Title: ");
    fgets(b->title, sizeof(b->title), stdin);
    // Remove the trailing newline character added by fgets, if present
    b->title[strcspn(b->title, "\n")] = '\0';

    printf("Enter Author Name: ");
    fgets(b->author, sizeof(b->author), stdin);
    b->author[strcspn(b->author, "\n")] = '\0';

    printf("Enter Book Price: ");
    scanf("%f", &b->price);
}

// Function to display book information (takes struct by value)
void displayBook(struct Book b) {
    printf("\n--- Book Details ---\n");
    printf("ID     : %d\n", b.id);
    printf("Title  : %s\n", b.title);
    printf("Author : %s\n", b.author);
    printf("Price  : $%.2f\n", b.price);
}

int main() {
    struct Book myBook;

    printf("Please enter the book information:\n");
    readBook(&myBook);

    displayBook(myBook);

    return 0;
}

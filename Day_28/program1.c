#include <stdio.h>
#include <string.h>

struct Book {
    int id;
    char title[50];
    char author[50];
};

struct Book book[100];
int count = 0;

void addBook() {
    printf("\nEnter Book ID: ");
    scanf("%d", &book[count].id);

    printf("Enter Book Title: ");
    scanf(" %[^\n]", book[count].title);

    printf("Enter Author Name: ");
    scanf(" %[^\n]", book[count].author);

    count++;
    printf("\nBook Added Successfully!\n");
}

void displayBooks() {
    int i;

    if (count == 0) {
        printf("\nNo Books Available!\n");
        return;
    }

    printf("\n----- Book List -----\n");
    for (i = 0; i < count; i++) {
        printf("\nBook ID : %d", book[i].id);
        printf("\nTitle   : %s", book[i].title);
        printf("\nAuthor  : %s\n", book[i].author);
    }
}

void searchBook() {
    int id, i;

    printf("\nEnter Book ID to Search: ");
    scanf("%d", &id);

    for (i = 0; i < count; i++) {
        if (book[i].id == id) {
            printf("\nBook Found!");
            printf("\nBook ID : %d", book[i].id);
            printf("\nTitle   : %s", book[i].title);
            printf("\nAuthor  : %s\n", book[i].author);
            return;
        }
    }

    printf("\nBook Not Found!\n");
}

void deleteBook() {
    int id, i, j;

    printf("\nEnter Book ID to Delete: ");
    scanf("%d", &id);

    for (i = 0; i < count; i++) {
        if (book[i].id == id) {
            for (j = i; j < count - 1; j++) {
                book[j] = book[j + 1];
            }
            count--;
            printf("\nBook Deleted Successfully!\n");
            return;
        }
    }

    printf("\nBook Not Found!\n");
}

int main() {
    int choice;

    do {
        printf("\n===== Library Management System =====");
        printf("\n1. Add Book");
        printf("\n2. Display Books");
        printf("\n3. Search Book");
        printf("\n4. Delete Book");
        printf("\n5. Exit");
        printf("\nEnter Your Choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addBook();
                break;
            case 2:
                displayBooks();
                break;
            case 3:
                searchBook();
                break;
            case 4:
                deleteBook();
                break;
            case 5:
                printf("\nThank You!\n");
                break;
            default:
                printf("\nInvalid Choice!\n");
        }
    } while (choice != 5);

    return 0;
}
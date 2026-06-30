#include <stdio.h>
#include <string.h>

struct Contact {
    char name[50];
    char phone[15];
};

struct Contact contacts[100];
int count = 0;

void addContact() {
    printf("\nEnter Name: ");
    scanf(" %[^\n]", contacts[count].name);

    printf("Enter Phone Number: ");
    scanf("%s", contacts[count].phone);

    count++;
    printf("Contact Added Successfully!\n");
}

void viewContacts() {
    if (count == 0) {
        printf("\nNo Contacts Available!\n");
        return;
    }

    printf("\n--- Contact List ---\n");
    for (int i = 0; i < count; i++) {
        printf("%d. Name: %s\n", i + 1, contacts[i].name);
        printf("   Phone: %s\n", contacts[i].phone);
    }
}

void searchContact() {
    char searchName[50];
    int found = 0;

    printf("\nEnter Name to Search: ");
    scanf(" %[^\n]", searchName);

    for (int i = 0; i < count; i++) {
        if (strcmp(contacts[i].name, searchName) == 0) {
            printf("\nContact Found!\n");
            printf("Name: %s\n", contacts[i].name);
            printf("Phone: %s\n", contacts[i].phone);
            found = 1;
            break;
        }
    }

    if (!found)
        printf("Contact Not Found!\n");
}

void deleteContact() {
    char deleteName[50];
    int found = 0;

    printf("\nEnter Name to Delete: ");
    scanf(" %[^\n]", deleteName);

    for (int i = 0; i < count; i++) {
        if (strcmp(contacts[i].name, deleteName) == 0) {
            for (int j = i; j < count - 1; j++) {
                contacts[j] = contacts[j + 1];
            }
            count--;
            found = 1;
            printf("Contact Deleted Successfully!\n");
            break;
        }
    }

    if (!found)
        printf("Contact Not Found!\n");
}

int main() {
    int choice;

    do {
        printf("\n===== Contact Management System =====\n");
        printf("1. Add Contact\n");
        printf("2. View Contacts\n");
        printf("3. Search Contact\n");
        printf("4. Delete Contact\n");
        printf("5. Exit\n");
        printf("Enter Your Choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addContact();
                break;
            case 2:
                viewContacts();
                break;
            case 3:
                searchContact();
                break;
            case 4:
                deleteContact();
                break;
            case 5:
                printf("Exiting Program...\n");
                break;
            default:
                printf("Invalid Choice!\n");
        }
    } while (choice != 5);

    return 0;
}
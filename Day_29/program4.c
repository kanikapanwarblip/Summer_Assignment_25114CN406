#include <stdio.h>

struct Item {
    int id;
    char name[50];
    int quantity;
    float price;
};

struct Item items[100];
int count = 0;

void addItem() {
    printf("\nEnter Item ID: ");
    scanf("%d", &items[count].id);

    printf("Enter Item Name: ");
    scanf(" %[^\n]", items[count].name);

    printf("Enter Quantity: ");
    scanf("%d", &items[count].quantity);

    printf("Enter Price: ");
    scanf("%f", &items[count].price);

    count++;
    printf("Item Added Successfully!\n");
}

void displayItems() {
    if (count == 0) {
        printf("\nNo Items in Inventory!\n");
        return;
    }

    printf("\n----- Inventory -----\n");
    printf("ID\tName\t\tQuantity\tPrice\n");

    for (int i = 0; i < count; i++) {
        printf("%d\t%s\t\t%d\t\t%.2f\n",
               items[i].id,
               items[i].name,
               items[i].quantity,
               items[i].price);
    }
}

void searchItem() {
    int id, found = 0;

    printf("Enter Item ID to Search: ");
    scanf("%d", &id);

    for (int i = 0; i < count; i++) {
        if (items[i].id == id) {
            printf("\nItem Found!\n");
            printf("ID: %d\n", items[i].id);
            printf("Name: %s\n", items[i].name);
            printf("Quantity: %d\n", items[i].quantity);
            printf("Price: %.2f\n", items[i].price);
            found = 1;
            break;
        }
    }

    if (!found)
        printf("Item Not Found!\n");
}

void deleteItem() {
    int id, found = 0;

    printf("Enter Item ID to Delete: ");
    scanf("%d", &id);

    for (int i = 0; i < count; i++) {
        if (items[i].id == id) {
            for (int j = i; j < count - 1; j++) {
                items[j] = items[j + 1];
            }
            count--;
            found = 1;
            printf("Item Deleted Successfully!\n");
            break;
        }
    }

    if (!found)
        printf("Item Not Found!\n");
}

int main() {
    int choice;

    do {
        printf("\n===== INVENTORY MANAGEMENT SYSTEM =====\n");
        printf("1. Add Item\n");
        printf("2. Display Items\n");
        printf("3. Search Item\n");
        printf("4. Delete Item\n");
        printf("5. Exit\n");
        printf("Enter Your Choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addItem();
                break;
            case 2:
                displayItems();
                break;
            case 3:
                searchItem();
                break;
            case 4:
                deleteItem();
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
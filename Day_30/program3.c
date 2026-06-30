#include <stdio.h>

struct Employee {
    int id;
    char name[50];
    char department[50];
    float salary;
};

struct Employee emp[100];
int count = 0;

void addEmployee() {
    printf("\nEnter Employee ID: ");
    scanf("%d", &emp[count].id);

    printf("Enter Employee Name: ");
    scanf(" %[^\n]", emp[count].name);

    printf("Enter Department: ");
    scanf(" %[^\n]", emp[count].department);

    printf("Enter Salary: ");
    scanf("%f", &emp[count].salary);

    count++;
    printf("Employee Added Successfully!\n");
}

void displayEmployees() {
    int i;

    if (count == 0) {
        printf("\nNo Employee Records Found!\n");
        return;
    }

    printf("\n----- Employee Records -----\n");
    printf("ID\tName\t\tDepartment\tSalary\n");

    for (i = 0; i < count; i++) {
        printf("%d\t%s\t\t%s\t\t%.2f\n",
               emp[i].id,
               emp[i].name,
               emp[i].department,
               emp[i].salary);
    }
}

void searchEmployee() {
    int id, i, found = 0;

    printf("Enter Employee ID to Search: ");
    scanf("%d", &id);

    for (i = 0; i < count; i++) {
        if (emp[i].id == id) {
            printf("\nEmployee Found!\n");
            printf("ID         : %d\n", emp[i].id);
            printf("Name       : %s\n", emp[i].name);
            printf("Department : %s\n", emp[i].department);
            printf("Salary     : %.2f\n", emp[i].salary);
            found = 1;
            break;
        }
    }

    if (!found)
        printf("Employee Not Found!\n");
}

void deleteEmployee() {
    int id, i, j, found = 0;

    printf("Enter Employee ID to Delete: ");
    scanf("%d", &id);

    for (i = 0; i < count; i++) {
        if (emp[i].id == id) {
            for (j = i; j < count - 1; j++) {
                emp[j] = emp[j + 1];
            }
            count--;
            found = 1;
            printf("Employee Deleted Successfully!\n");
            break;
        }
    }

    if (!found)
        printf("Employee Not Found!\n");
}

int main() {
    int choice;

    do {
        printf("\n===== MINI EMPLOYEE MANAGEMENT SYSTEM =====\n");
        printf("1. Add Employee\n");
        printf("2. Display Employees\n");
        printf("3. Search Employee\n");
        printf("4. Delete Employee\n");
        printf("5. Exit\n");
        printf("Enter Your Choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addEmployee();
                break;
            case 2:
                displayEmployees();
                break;
            case 3:
                searchEmployee();
                break;
            case 4:
                deleteEmployee();
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
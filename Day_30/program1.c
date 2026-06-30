#include <stdio.h>

struct Student {
    int rollNo;
    char name[50];
    float marks;
};

int main() {
    struct Student s[100];
    int n, i, choice, roll, found;

    printf("Enter number of students: ");
    scanf("%d", &n);

    do {
        printf("\n===== STUDENT RECORD SYSTEM =====\n");
        printf("1. Add Student Records\n");
        printf("2. Display Student Records\n");
        printf("3. Search Student by Roll Number\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {

        case 1:
            for(i = 0; i < n; i++) {
                printf("\nEnter details of Student %d\n", i + 1);

                printf("Roll Number: ");
                scanf("%d", &s[i].rollNo);

                printf("Name: ");
                scanf(" %[^\n]", s[i].name);

                printf("Marks: ");
                scanf("%f", &s[i].marks);
            }
            printf("\nStudent records added successfully!\n");
            break;

        case 2:
            printf("\n----- Student Records -----\n");
            printf("Roll No\tName\t\tMarks\n");

            for(i = 0; i < n; i++) {
                printf("%d\t%s\t\t%.2f\n",
                       s[i].rollNo,
                       s[i].name,
                       s[i].marks);
            }
            break;

        case 3:
            found = 0;

            printf("Enter Roll Number to Search: ");
            scanf("%d", &roll);

            for(i = 0; i < n; i++) {
                if(s[i].rollNo == roll) {
                    printf("\nStudent Found!\n");
                    printf("Roll No : %d\n", s[i].rollNo);
                    printf("Name    : %s\n", s[i].name);
                    printf("Marks   : %.2f\n", s[i].marks);
                    found = 1;
                    break;
                }
            }

            if(found == 0)
                printf("Student not found!\n");
            break;

        case 4:
            printf("Exiting Program...\n");
            break;

        default:
            printf("Invalid Choice!\n");
        }

    } while(choice != 4);

    return 0;
}
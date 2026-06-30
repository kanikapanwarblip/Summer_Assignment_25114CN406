#include <stdio.h>

int main()
{
    char name[50];
    int roll;
    float eng, math, sci, sst, comp;
    float total, percentage;
    char grade[3];
    char result[10];

    printf("Enter Student Name: ");
    scanf("%s", name);

    printf("Enter Roll Number: ");
    scanf("%d", &roll);

    printf("\nEnter Marks out of 100\n");

    printf("English: ");
    scanf("%f", &eng);

    printf("Math: ");
    scanf("%f", &math);

    printf("Science: ");
    scanf("%f", &sci);

    printf("Social Science: ");
    scanf("%f", &sst);

    printf("Computer: ");
    scanf("%f", &comp);

    total = eng + math + sci + sst + comp;
    percentage = total / 5;

    // Grade calculation
    if (percentage >= 90)
        strcpy(grade, "A+");
    else if (percentage >= 80)
        strcpy(grade, "A");
    else if (percentage >= 70)
        strcpy(grade, "B");
    else if (percentage >= 60)
        strcpy(grade, "C");
    else if (percentage >= 50)
        strcpy(grade, "D");
    else
        strcpy(grade, "F");

    // Result calculation
    if (eng >= 33 && math >= 33 && sci >= 33 && sst >= 33 && comp >= 33)
        strcpy(result, "PASS");
    else
        strcpy(result, "FAIL");

    // Display Marksheet
    printf("\n========== MARKSHEET ==========\n");
    printf("Student Name : %s\n", name);
    printf("Roll Number  : %d\n", roll);
    printf("--------------------------------\n");
    printf("English       : %.2f\n", eng);
    printf("Math          : %.2f\n", math);
    printf("Science       : %.2f\n", sci);
    printf("Social Science: %.2f\n", sst);
    printf("Computer      : %.2f\n", comp);
    printf("--------------------------------\n");
    printf("Total Marks   : %.2f / 500\n", total);
    printf("Percentage    : %.2f%%\n", percentage);
    printf("Grade         : %s\n", grade);
    printf("Result        : %s\n", result);
    printf("================================\n");

    return 0;
}
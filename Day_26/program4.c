#include <stdio.h>

int main() {
    int score = 0, answer;

    printf("=== Quiz Application ===\n\n");

    // Question 1
    printf("1. What is the capital of India?\n");
    printf("1. Mumbai\n2. Delhi\n3. Kolkata\n4. Chennai\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);

    if (answer == 2) {
        printf("Correct!\n\n");
        score++;
    } else {
        printf("Wrong! Correct answer is Delhi.\n\n");
    }

    // Question 2
    printf("2. Which language is used to write C programs?\n");
    printf("1. C\n2. Java\n3. Python\n4. HTML\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);

    if (answer == 1) {
        printf("Correct!\n\n");
        score++;
    } else {
        printf("Wrong! Correct answer is C.\n\n");
    }

    // Question 3
    printf("3. How many days are there in a week?\n");
    printf("1. 5\n2. 6\n3. 7\n4. 8\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);

    if (answer == 3) {
        printf("Correct!\n\n");
        score++;
    } else {
        printf("Wrong! Correct answer is 7.\n\n");
    }

    // Display Result
    printf("=== Quiz Completed ===\n");
    printf("Your Score: %d/3\n", score);

    if (score == 3)
        printf("Excellent!\n");
    else if (score == 2)
        printf("Good Job!\n");
    else
        printf("Keep Practicing!\n");

    return 0;
}
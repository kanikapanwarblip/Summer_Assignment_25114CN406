#include <stdio.h>

int main()
{
    int choice, score = 0;

    printf("===== QUIZ APPLICATION =====\n\n");

    // Question 1
    printf("1. Which language is used for system programming?\n");
    printf("1. HTML\n2. C\n3. Python\n4. Java\n");
    printf("Enter your answer: ");
    scanf("%d", &choice);

    if(choice == 2)
    {
        score++;
    }

    // Question 2
    printf("\n2. Which is the largest planet in our solar system?\n");
    printf("1. Earth\n2. Mars\n3. Jupiter\n4. Venus\n");
    printf("Enter your answer: ");
    scanf("%d", &choice);

    if(choice == 3)
    {
        score++;
    }

    // Question 3
    printf("\n3. How many bits are there in 1 byte?\n");
    printf("1. 4\n2. 8\n3. 16\n4. 32\n");
    printf("Enter your answer: ");
    scanf("%d", &choice);

    if(choice == 2)
    {
        score++;
    }

    // Display result
    printf("\n===== RESULT =====\n");
    printf("Your score is: %d/3\n", score);

    if(score == 3)
        printf("Excellent!");
    else if(score == 2)
        printf("Good Job!");
    else
        printf("Keep Practicing!");

    return 0;
}
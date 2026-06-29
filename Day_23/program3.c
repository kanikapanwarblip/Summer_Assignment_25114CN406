#include <stdio.h>
#include <string.h>

int areAnagrams(char str1[], char str2[]) {
    int count[256] = {0};
    int i;

    // If lengths are different, they cannot be anagrams
    if (strlen(str1) != strlen(str2))
        return 0;

    // Count characters of first string
    for (i = 0; str1[i] != '\0'; i++) {
        count[(unsigned char)str1[i]]++;
    }

    // Subtract counts using second string
    for (i = 0; str2[i] != '\0'; i++) {
        count[(unsigned char)str2[i]]--;
    }

    // Check if all counts are zero
    for (i = 0; i < 256; i++) {
        if (count[i] != 0)
            return 0;
    }

    return 1;
}

int main() {
    char str1[100], str2[100];

    printf("Enter first string: ");
    scanf("%s", str1);

    printf("Enter second string: ");
    scanf("%s", str2);

    if (areAnagrams(str1, str2))
        printf("The strings are Anagrams.\n");
    else
        printf("The strings are Not Anagrams.\n");

    return 0;
}
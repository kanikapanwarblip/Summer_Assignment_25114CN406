#include <stdio.h>

char firstRepeatingChar(char str[]) {
    int freq[256] = {0};
    int i;

    // Count frequency of each character
    for (i = 0; str[i] != '\0'; i++) {
        freq[(unsigned char)str[i]]++;
    }

    // Find the first character with frequency > 1
    for (i = 0; str[i] != '\0'; i++) {
        if (freq[(unsigned char)str[i]] > 1) {
            return str[i];
        }
    }

    return '\0';   // No repeating character
}

int main() {
    char str[] = "abcaade";

    char ch = firstRepeatingChar(str);

    if (ch != '\0')
        printf("First repeating character: %c\n", ch);
    else
        printf("No repeating character found.\n");

    return 0;
}
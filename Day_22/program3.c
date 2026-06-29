#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, freq[256] = {0};

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Count frequency of each character
    for(i = 0; str[i] != '\0'; i++) {
        if(str[i] != '\n')
            freq[(unsigned char)str[i]]++;
    }

    // Display frequencies
    printf("Character Frequencies:\n");
    for(i = 0; i < 256; i++) {
        if(freq[i] != 0)
            printf("%c = %d\n", i, freq[i]);
    }

    return 0;
}
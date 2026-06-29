#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int count[256] = {0};
    int i;

    printf("Enter a string: ");
    gets(str);

    // Count frequency of each character
    for(i = 0; str[i] != '\0'; i++)
    {
        count[(unsigned char)str[i]]++;
    }

    // Print common characters
    printf("Common characters are: ");
    for(i = 0; i < 256; i++)
    {
        if(count[i] > 1)
        {
            printf("%c ", i);
        }
    }

    return 0;
}
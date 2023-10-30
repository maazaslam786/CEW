#include <stdio.h>

int compareStrings(const char *str1, const char *str2) {
    while (*str1 && *str2) {
        if (*str1 != *str2) {
            return 0; // Not equal
        }
        str1++;
        str2++;
    }

    // If both strings have the same length and characters, they are equal
    return (*str1 == '\0' && *str2 == '\0');
}
int main() {
    char string1[100], string2[100];

    printf("Enter the first string: ");
    scanf("%s", string1);

    printf("Enter the second string: ");
    scanf("%s", string2);

    if (compareStrings(string1, string2)) {
        printf("The strings are equal.\n");
    } else {
        printf("The strings are not equal.\n");
    }

    return 0;
}

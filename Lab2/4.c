#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char sentence[1000];
    printf("Enter a sentence: ");
    gets(sentence); // Input the sentence (be cautious when using gets, it's not safe)

    int length = strlen(sentence);

    for (int i = 0; i < length; i++) {
        if (islower(sentence[i])) {
            sentence[i] = toupper(sentence[i]);
        } else if (isupper(sentence[i])) {
            sentence[i] = tolower(sentence[i]);
        }
    }

    printf("Converted sentence: %s\n", sentence);

    return 0;
}

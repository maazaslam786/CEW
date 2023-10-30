#include <stdio.h>
#include <stdlib.h>

#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of lines n: ");
    scanf("%d", &n);

    for (int i = n; i > 0; i--) {
        for (int j = 0; j < i - 1; j++) {
            printf(" ");  // Print spaces
        }
        for (int k = i; k <= n; k++) {
            printf("*");  // Print asterisks
        }
        printf("\n");  // Move to the next line
    }

    return 0;
}



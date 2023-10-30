#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4, 2, 5, 6, 1, 7, 8, 9, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    int unique[100]; // Assuming a maximum of 100 unique elements
    int uniqueCount = 0;

    for (int i = 0; i < n; i++) {
        int isDuplicate = 0;
        for (int j = 0; j < uniqueCount; j++) {
            if (arr[i] == unique[j]) {
                isDuplicate = 1;
                break;
            }
        }
        if (!isDuplicate) {
            unique[uniqueCount] = arr[i];
            uniqueCount++;
        }
    }

    printf("Unique elements in the array: ");
    for (int i = 0; i < uniqueCount; i++) {
        printf("%d ", unique[i]);
    }

    return 0;
}

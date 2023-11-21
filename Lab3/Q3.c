#include <stdio.h>

#define MAX_SIZE 100

void inputArray(int *arr, int size);
void printArray(const int *arr, int size);

int main() {
    int arr[MAX_SIZE];
    int size;

    printf("Enter the size of the array (max %d): ", MAX_SIZE);
    scanf("%d", &size);

    inputArray(arr,size);
    printArray(arr,size);
}

void inputArray(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", arr + i);
    }
}

void printArray(const int *arr, int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", *(arr + i));
    }
    printf("\n");
}

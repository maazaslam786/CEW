#include <stdio.h>

int search(int arr[], int n, int target) {
  for (int i = 0; i < n; i++) {
    if (arr[i] == target) {
      return i; // Return the index if the target is found.
    }
  }
  return -1; // Return -1 if the target is not found.
}

int main() {
  int arr[] = {10, 20, 30, 40, 50};
  int n = sizeof(arr) / sizeof(arr[0]);
  int target = 30;

  int index = search(arr, n, target);

  if (index == -1) {
    printf("Element not found\n");
  } else {
    printf("Element found at index %d\n", index);
  }

  return 0;
}

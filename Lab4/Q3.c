#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
  int data;
  struct Node *next;
} Node;

int *convertListToArray(Node *head) {
  int listSize = 0;
  Node *tempNode = head;

  // Count the number of nodes in the linked list
  while (tempNode) {
    listSize++;
    tempNode = tempNode->next;
  }

  // Allocate memory for the array
  int *array = (int *)malloc(listSize * sizeof(int));

  // Copy the data from the linked list to the array
  int index = 0;
  tempNode = head;
  while (tempNode) {
    array[index] = tempNode->data;
    index++;
    tempNode = tempNode->next;
  }

  return array;
}

void printList(Node *head) {
  while (head) {
    printf("%d ", head->data);
    head = head->next;
  }
  printf("\n");
}

void printArray(int *array, int size) {
  for (int i = 0; i < size; i++) {
    printf("%d ", array[i]);
  }
  printf("\n");
}

int main() {
  // Create a singly linked list
  Node *head = NULL;

  // Add elements to the linked list
  Node *newNode = (Node *)malloc(sizeof(Node));
  newNode->data = 10;
  newNode->next = NULL;
  head = newNode;

  newNode = (Node *)malloc(sizeof(Node));
  newNode->data = 20;
  newNode->next = head;
  head = newNode;

  newNode = (Node *)malloc(sizeof(Node));
  newNode->data = 30;
  newNode->next = head;
  head = newNode;

  // Print the original linked list
  printf("Original linked list: ");
  printList(head);

  // Convert the linked list to an array
  int *array = convertListToArray(head);
  int size = sizeof(array) / sizeof(array[0]);

  // Print the converted array
  printf("Converted array: ");
  printArray(array, size);

  free(array); // Free the memory allocated for the array

  return 0;
}

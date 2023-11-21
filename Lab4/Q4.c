#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
  int data;
  struct Node *next;
} Node;

void removeOddIndices(Node **head) {
  Node *prevNode = NULL;
  Node *currNode = *head;

  int index = 1;
  while (currNode) {
    if (index % 2 == 1) { // Remove node if index is odd
      if (!prevNode) {
        *head = currNode->next;
      } else {
        prevNode->next = currNode->next;
      }
      free(currNode);
    } else {
      prevNode = currNode;
    }

    currNode = currNode->next;
    index++;
  }
}

void printList(Node *head) {
  while (head) {
    printf("%d ", head->data);
    head = head->next;
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

  newNode = (Node *)malloc(sizeof(Node));
  newNode->data = 40;
  newNode->next = head;
  head = newNode;

  newNode = (Node *)malloc(sizeof(Node));
  newNode->data = 50;
  newNode->next = head;
  head = newNode;

  // Print the original linked list
  printf("Original linked list: ");
  printList(head);

  // Remove elements with odd indices
  removeOddIndices(&head);

  // Print the modified linked list
  printf("Modified linked list: ");
  printList(head);

  return 0;
}

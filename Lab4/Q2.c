#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
  int data;
  struct Node *next;
} Node;

// Function to merge two sorted linked lists
Node *mergeLists(Node *list1, Node *list2) {
  Node *mergedList = NULL;
  Node *prevNode = NULL;

  while (list1 && list2) {
    if (list1->data <= list2->data) {
      if (!mergedList) {
        mergedList = list1;
      } else {
        prevNode->next = list1;
      }
      prevNode = list1;
      list1 = list1->next;
    } else {
      if (!mergedList) {
        mergedList = list2;
      } else {
        prevNode->next = list2;
      }
      prevNode = list2;
      list2 = list2->next;
    }
  }

  // Append the remaining elements of the longer list
  if (list1) {
    prevNode->next = list1;
  } else if (list2) {
    prevNode->next = list2;
  }

  return mergedList;
}

// Function to print the linked list
void printList(Node *head) {
  while (head) {
    printf("%d ", head->data);
    head = head->next;
  }
  printf("\n");
}

int main() {
  // Create two sorted linked lists
  Node *list1 = NULL;
  Node *list2 = NULL;

  // Add elements to the first list
  Node *newNode = (Node *)malloc(sizeof(Node));
  newNode->data = 2;
  newNode->next = NULL;
  list1 = newNode;

  newNode = (Node *)malloc(sizeof(Node));
  newNode->data = 4;
  newNode->next = list1;
  list1 = newNode;

  newNode = (Node *)malloc(sizeof(Node));
  newNode->data = 6;
  newNode->next = list1;
  list1 = newNode;

  // Add elements to the second list
  newNode = (Node *)malloc(sizeof(Node));
  newNode->data = 1;
  newNode->next = NULL;
  list2 = newNode;

  newNode = (Node *)malloc(sizeof(Node));
  newNode->data = 3;
  newNode->next = list2;
  list2 = newNode;

  newNode = (Node *)malloc(sizeof(Node));
  newNode->data = 5;
  newNode->next = list2;
  list2 = newNode;

  // Print the original linked lists
  printf("List 1: ");
  printList(list1);

  printf("List 2: ");
  printList(list2);

  // Merge the two sorted lists
  Node *mergedList = mergeLists(list1, list2);

  // Print the merged list
  printf("Merged List: ");
  printList(mergedList);

  return 0;
}

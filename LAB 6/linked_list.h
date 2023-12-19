#ifndef LINKED_LIST_H_
#define LINKED_LIST_H_

typedef struct Node {
    int data;
    struct Node* next;
} Node;

Node* createNode(int data); // for create a new node

Node* insertAtBeginning(Node* head, int data); // For insert

Node* insertAtEnd(Node* head, int data); // for insert at end

Node* deleteNode(Node* head, int data); // for delete node

void printList(Node* head); // for print

void freeList(Node* head); // Function to free the memory

#endif // LINKED_LIST_H_


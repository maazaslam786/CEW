#include "linked_list.h"
#include "linked_list.c"
#include <stdio.h>
#include <stdlib.h>

int main() {
    Node* myList = NULL;

    myList = insertAtBeginning(myList, 3);
    myList = insertAtBeginning(myList, 2);
    myList = insertAtBeginning(myList, 1);
    myList = insertAtEnd(myList, 4);

    printf("Original List: ");
    printList(myList);

    myList = deleteNode(myList, 2);

    printf("List after deleting node with value 2: ");
    printList(myList);

    freeList(myList);

    return 0;
}



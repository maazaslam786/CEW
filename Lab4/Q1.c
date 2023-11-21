#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Contact {
  char name[50];
  char email[50];
  char phone[20];
} Contact;

Contact *contacts = NULL;
int numContacts = 0;

void addContact() {
  Contact *newContact = (Contact *)malloc(sizeof(Contact));
  if (!newContact) {
    printf("Error: Memory allocation failed.\n");
    return;
  }

  printf("Enter contact name: ");
  scanf("%s", newContact->name);

  printf("Enter contact email: ");
  scanf("%s", newContact->email);

  printf("Enter contact phone number: ");
  scanf("%s", newContact->phone);

  // Reallocate memory for contacts array if needed
  if (numContacts == 0) {
    contacts = (Contact *)malloc(sizeof(Contact));
  } else {
    contacts = (Contact *)realloc(contacts, (numContacts + 1) * sizeof(Contact));
  }

  // Add new contact to the contacts array
  contacts[numContacts] = *newContact;
  numContacts++;

  free(newContact); // Free temporary newContact memory
}

void deleteContact() {
  if (numContacts == 0) {
    printf("Address book is empty.\n");
    return;
  }

  printf("Enter contact name to delete: ");
  char name[50];
  scanf("%s", name);

  int foundIndex = -1;
  for (int i = 0; i < numContacts; i++) {
    if (strcmp(name, contacts[i].name) == 0) {
      foundIndex = i;
      break;
    }
  }

  if (foundIndex == -1) {
    printf("Contact not found.\n");
    return;
  }

  // Shift contacts array to remove deleted contact
  for (int i = foundIndex + 1; i < numContacts; i++) {
    contacts[i - 1] = contacts[i];
  }

  numContacts--;

  // Reallocate memory for contacts array
  contacts = (Contact *)realloc(contacts, numContacts * sizeof(Contact));
}

void displayContacts() {
  if (numContacts == 0) {
    printf("Address book is empty.\n");
    return;
  }

  printf("\nAddress Book:\n");
  for (int i = 0; i < numContacts; i++) {
    printf("Name: %s\n", contacts[i].name);
    printf("Email: %s\n", contacts[i].email);
    printf("Phone: %s\n", contacts[i].phone);
    printf("\n");
  }
}

int main() {
  int choice;

  do {
    printf("\nAddress Book Menu:\n");
    printf("1. Add Contact\n");
    printf("2. Delete Contact\n");
    printf("3. Display Contacts\n");
    printf("4. Exit\n");

    printf("\nEnter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
      case 1:
        addContact();
        break;
      case 2:
        deleteContact();
        break;
      case 3:
        displayContacts();
        break;
      case 4:
        printf("Exiting address book...\n");
        break;
      default:
        printf("Invalid choice. Please try again.\n");
    }
  } while (choice != 4);

  // Free memory allocated for contacts array
  if (contacts) {
    free(contacts);
  }

  return 0;
}

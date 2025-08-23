#include <stdio.h>
#include <string.h>

#define MAX_CONTACTS 100

// Structure to store contact details
struct Contact {
    char name[50];
    char telephone[20];
    char address[100];
    char relationship[50];
    int blocked;  // 0 for unblocked, 1 for blocked
};

struct Contact directory[MAX_CONTACTS];
int contactCount = 0;

// Function to add a contact
void addContact() {
    if (contactCount < MAX_CONTACTS) {
        struct Contact newContact;
        printf("Enter name: ");
        scanf("%s", newContact.name);
        printf("Enter telephone number: ");
        scanf("%s", newContact.telephone);
        printf("Enter address: ");
        scanf("%s", newContact.address);
        printf("Enter relationship: ");
        scanf("%s", newContact.relationship);
        newContact.blocked = 0; // New contact is not blocked by default

        directory[contactCount] = newContact;
        contactCount++;
        printf("Contact added successfully!\n");
    } else {
        printf("Directory is full.\n");
    }
}

// Function to show all unblocked contacts
void showContacts() {
    int found = 0;
    if (contactCount == 0) {
        printf("No contacts in the directory.\n");
    } else {
        printf("\nContacts in the directory:\n");
        for (int i = 0; i < contactCount; i++) {
            if (directory[i].blocked == 0) { // Show only unblocked contacts
                printf("Contact %d:\n", i + 1);
                printf("Name: %s\n", directory[i].name);
                printf("Telephone: %s\n", directory[i].telephone);
                printf("Address: %s\n", directory[i].address);
                printf("Relationship: %s\n", directory[i].relationship);
                printf("\n");
                found = 1;
            }
        }
        if (!found) {
            printf("No unblocked contacts available.\n");
        }
    }
}

// Function to update a contact
void updateContact() {
    if (contactCount == 0) {
        printf("No contacts in the directory to update.\n");
        return;
    }

    char name[50];
    printf("Enter the name of the contact to update: ");
    scanf("%s", name);

    for (int i = 0; i < contactCount; i++) {
        if (strcmp(directory[i].name, name) == 0) {
            if (directory[i].blocked == 1) {
                printf("Cannot update a blocked contact. Unblock it first.\n");
                return;
            }
            printf("Enter new telephone number: ");
            scanf("%s", directory[i].telephone);
            printf("Enter new address: ");
            scanf("%s", directory[i].address);
            printf("Enter new relationship: ");
            scanf("%s", directory[i].relationship);
            printf("Contact updated successfully!\n");
            return;
        }
    }
    printf("Contact not found.\n");
}

// Function to delete a contact
void deleteContact() {
    if (contactCount == 0) {
        printf("No contacts in the directory to delete.\n");
        return;
    }

    char name[50];
    printf("Enter the name of the contact to delete: ");
    scanf("%s", name);

    for (int i = 0; i < contactCount; i++) {
        if (strcmp(directory[i].name, name) == 0) {
            for (int j = i; j < contactCount - 1; j++) {
                directory[j] = directory[j + 1];
            }
            contactCount--;
            printf("Contact deleted successfully!\n");
            return;
        }
    }
    printf("Contact not found.\n");
}

// Function to block a contact
void blockContact() {
    if (contactCount == 0) {
        printf("No contacts to block.\n");
        return;
    }

    char name[50];
    printf("Enter the name of the contact to block: ");
    scanf("%s", name);

    for (int i = 0; i < contactCount; i++) {
        if (strcmp(directory[i].name, name) == 0) {
            if (directory[i].blocked == 1) {
                printf("Contact is already blocked.\n");
                return;
            }
            directory[i].blocked = 1;
            printf("Contact blocked successfully!\n");
            return;
        }
    }
    printf("Contact not found.\n");
}

// Function to show blocked contacts
void showBlockedContacts() {
    int found = 0;
    printf("\nBlocked Contacts:\n");
    for (int i = 0; i < contactCount; i++) {
        if (directory[i].blocked == 1) {
            printf("Contact %d:\n", i + 1);
            printf("Name: %s\n", directory[i].name);
            printf("Telephone: %s\n", directory[i].telephone);
            printf("Address: %s\n", directory[i].address);
            printf("Relationship: %s\n", directory[i].relationship);
            printf("\n");
            found = 1;
        }
    }
    if (!found) {
        printf("No blocked contacts available.\n");
    }
}

// Function to unblock a contact
void unblockContact() {
    if (contactCount == 0) {
        printf("No blocked contacts to unblock.\n");
        return;
    }

    char name[50];
    printf("Enter the name of the contact to unblock: ");
    scanf("%s", name);

    for (int i = 0; i < contactCount; i++) {
        if (strcmp(directory[i].name, name) == 0) {
            if (directory[i].blocked == 0) {
                printf("Contact is already unblocked.\n");
                return;
            }
            directory[i].blocked = 0;
            printf("Contact unblocked successfully!\n");
            return;
        }
    }
    printf("Contact not found.\n");
}

// Main function
int main() {
    int choice;
    do {
        printf("\n1. Add Contact\n2. Show Contacts\n3. Update Contact\n4. Delete Contact\n5. Block Contact\n6. Show Blocked Contacts\n7. Unblock Contact\n8. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addContact();
                break;
            case 2:
                showContacts();
                break;
            case 3:
                updateContact();
                break;
            case 4:
                deleteContact();
                break;
            case 5:
                blockContact();
                break;
            case 6:
                showBlockedContacts();
                break;
            case 7:
                unblockContact();
                break;
            case 8:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice.\n");
        }
    } while (choice != 8);

    return 0;
}
#include<stdio.h>
#include<string.h>

#define CONTACTS

struct Contact{
    char name[50];
    char telephone[20];
    char address[100];
    char relationship[50];
};

struct Contact directory[CONTACTS];
int contactCount=0;




void addContact(){
    if(contactCount< CONTACTS){
            struct Contact newContact;
    printf("Enter name: ");
    scanf("%s",newContact.name);             // %s is used beacause above info is in char
    printf("Enter telephone number:");
    scanf("%s",newContact.telephone);
    printf("Enter address:");
    scanf("%s",newcontact.address);
    printf("Enter relationship:");
    scanf("%s",newContact.relationship);

    directory[contactCount]= newContact;
    contactCount++;
    printf("Contact added successfully!");
    }else{
        printf("Directory is full.");
    }
}


void showContacts(){
    if(contactCount ==0){
        printf("No contacts in the directory");
    }else{
        printf("Contacts in the directory:");
        for(int i=0;i<contactCount;i++){
            printf("Contact %d:"i +1);
            printf("Name: %s",directory[i].name);
            printf("Telephone: %s",directory[i].telephone);
            printf("Address: %s",directory[i].address);
            printf("Relationship: %s",directory[i].relationship);
            printf("");

        }
    }
}


















  int main()
    int choice;
    do{                                        // HERE WE USE DO WHILE LOOP BECAUSE EVEN IF ONE CONDITION FAILS IT WILL RUN
        printf("Saved Numbers");
        printf("(1) Add Contact");
        printf("(2) Show Contact");
        printf("(3) Update Contact");
        printf("(4) Delete Contact");
        printf("(5) Block Contact");
        printf("(6) Exit");
        printf("Enter your choice");
        scanf("%d",&choice);

        switch(choice){
        case 1:
                AddContact();
                break;
        case 2:
                ShowContact();
                break;
        case 3:
                UpdateContact();
                break;
        case 4:
                DeleteContact():
                break;
        case 5:
                printf("Exiting Contacts");
                break;
            deafult:
                printf("Invalid Contact");
        }
    } while(choice !=5);
      return 0;

    


#include "list.h"

mylist *insertion(mylist **h, mylist *person)
{
    if (*h == NULL)
    {
        mylist *nwnode = malloc(sizeof(mylist));
        if (nwnode == NULL)
            return NULL;

        nwnode->name = strdup(person->name);
        nwnode->address = strdup(person->address);
        nwnode->gender = strdup(person->gender);
        nwnode->phone = strdup(person->phone);

        if (nwnode->name == NULL || nwnode->address == NULL ||
            nwnode->gender == NULL || nwnode->phone == NULL)
        {
            free(nwnode->name);
            free(nwnode->address);
            free(nwnode->phone);
            free(nwnode->gender);
            free(nwnode);
            return NULL;
        }

        nwnode->age = person->age;
        nwnode->next = NULL;
        *h = nwnode;
    }
    else
    {
        mylist *nwnode = malloc(sizeof(mylist));
        if (nwnode == NULL)
            return NULL;

        nwnode->name = strdup(person->name);
        nwnode->address = strdup(person->address);
        nwnode->gender = strdup(person->gender);
        nwnode->phone = strdup(person->phone);

        if (nwnode->name == NULL || nwnode->address == NULL ||
            nwnode->gender == NULL || nwnode->phone == NULL)
        {
            free(nwnode->name);
            free(nwnode->address);
            free(nwnode->phone);
            free(nwnode->gender);
            free(nwnode);
            return NULL;
        }

        nwnode->age = person->age;
        nwnode->next = *h;
        *h = nwnode;
    }

    return *h;
}
int main()
{
    mylist* head = NULL;

    mylist person1;
    person1.age = 25;
    person1.name = "John";
    person1.address = "123 Main St";
    person1.phone = "555-1234";
    person1.gender = "Male";
    person1.next = NULL;
    insertion(&head, &person1);

    mylist person2;
    person2.age = 30;
    person2.name = "Jane";
    person2.address = "456 Elm St";
    person2.phone = "555-5678";
    person2.gender = "Female";
    person2.next = NULL;
    insertion(&head, &person2);

    mylist* current = head;
    while (current != NULL)
    {
        printf("Name: %s\n Age: %d\n Address: %s\n Phone: %s\n Gender: %s\n\n",
            current->name, current->age, current->address, current->phone, current->gender);
        current = current->next;
    }

    current = head;
    while (current != NULL)
    {
        mylist* temp = current;
        current = current->next;
        free(temp->name);
        free(temp->address);
        free(temp->phone);
        free(temp->gender);
        free(temp);
    }

    return 0;
}

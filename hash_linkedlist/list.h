#ifndef LIST_H
#define LIST_H

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <strings.h>
#include <stddef.h>

typedef struct node{
    char *name;
    int age;
    char *address, *phone, *gender;
    struct node *next;
}mylist;

void printlist();
mylist *insertion(mylist **h, mylist *person);
#endif

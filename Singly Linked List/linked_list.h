#ifndef _LINKED_LIST_H
#define _LINKED_LIST_H

#include "stdio.h"
#include "stdlib.h"

typedef struct node
{
    int data;
    struct node *nextNode;
}Node;

/*****************************************ADDING NODES FUNCTIONS*****************************************/
void addNodeAtBeginning(Node**, int);
void addNodeAtEnd(Node**, int);
void addNodeAtPosition(Node**, int);
/*****************************************ADDING NODES FUNCTIONS*****************************************/

/****************************************DELETING NODES FUNCTIONS****************************************/
void delNodeAtBeginning(Node**);
void delNodeAtEnd(Node**);
void delNodeAtPosition(Node**);
/****************************************DELETING NODES FUNCTIONS****************************************/

void printList(Node*);

#endif // _LINKED_LIST_H

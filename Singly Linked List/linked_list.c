#include "linked_list.h"

/*****************************************ADDING NODES FUNCTIONS*****************************************/
void addNodeAtPosition(Node **ptr2head, int data)
{
    //allocate new node
    Node *newNode = (Node*)malloc(sizeof(Node));

    //enter data in new node
    (*newNode).data = data;

    //position of new node
    int nodePosition = 0;
    printf("please enter the position of new node: ");
    scanf("%d", &nodePosition);

    //adding node in between
    //make sure list has more than 2 nodes
    int nodeCounter = 1;
    Node *checkNodePos = *ptr2head;
    if (*ptr2head == NULL)
    {
        //list has zero nodes
        addNodeAtBeginning(ptr2head, data);
    }
    else
    {
        //list has at least one node
        while ((*checkNodePos).nextNode != NULL)
        {
            checkNodePos = (*checkNodePos).nextNode;
            nodeCounter++;
        }
    }
    if (nodePosition <= nodeCounter)
    {
        //list has more than one node
        nodeCounter = 1;
        checkNodePos = *ptr2head;
        //find node before position and get the pointer pointing to next address
        while (nodeCounter < nodePosition-1)
        {
            checkNodePos = (*checkNodePos).nextNode;
            nodeCounter++;
        }
        //making new node point to next node
        (*newNode).nextNode = (*checkNodePos).nextNode;
        //making prev node point to new node
        (*checkNodePos).nextNode = newNode;
        printf("NEW NODE ADDED!\n\n");
    }
    else if(nodePosition > nodeCounter)
    {
        printf("out of list boundaries\n");
    }
    else
    {
        printf("less than 2 nodes\n");
    }
}

void addNodeAtEnd(Node **ptr2head, int data)
{
    //allocate new node
    Node *newNode = (Node*)malloc(sizeof(Node));

    //enter data in new node
    (*newNode).data = data;

    //adding node at last
    //make node point to NULL
    (*newNode).nextNode = NULL;
    //check if list was empty
    if (*ptr2head == NULL)
    {
        //if empty make head point to new node
        *ptr2head = newNode;
    }
    else
    {
        //if not get address of last node before null and put it checkLast
        Node *checkLast = (*ptr2head);
        while ((*checkLast).nextNode != NULL)
        {
            checkLast = (*checkLast).nextNode;
        }
        //make checkLast->next point to new node
        (*checkLast).nextNode = newNode;
    }
    printf("NEW NODE ADDED!\n\n");
}

void addNodeAtBeginning(Node **ptr2head, int data)
{
    //allocate new node
    Node *newNode = (Node*)malloc(sizeof(Node));

    //enter data in new node
    (*newNode).data = data;

    //adding node at first
    //make node point to what head points to
    (*newNode).nextNode = (*ptr2head);
    //make head point to new node
    (*ptr2head) = newNode;
    printf("NEW NODE ADDED!\n\n");
}
/*****************************************ADDING NODES FUNCTIONS*****************************************/

/****************************************DELETING NODES FUNCTIONS****************************************/
void delNodeAtBeginning(Node** ptr2head)
{
    //check if list is empty
    if(*ptr2head == NULL)
    {
        printf("NOTHING TO BE DELETED\n");
    }
    else
    {
        //delete at first
        //make head point to the next node
        Node *deleter = *ptr2head;
        *ptr2head = (**ptr2head).nextNode;
        //free the deleted node from memory
        free(deleter);
        printf("NODE DELETED!\n\n");
    }
}

void delNodeAtEnd(Node** ptr2head)
{
    //check if list is empty
    if(*ptr2head == NULL)
    {
        printf("NOTHING TO BE DELETED\n");
    }
    else
    {
        //delete at last
        Node *deleter = *ptr2head;
        Node *prev_deleter = *ptr2head;
        //look for last node
        while((*deleter).nextNode != NULL)
        {
            prev_deleter = deleter;
            deleter = (*deleter).nextNode;
        }
        //make previous to last node point to NULL
        (*prev_deleter).nextNode = NULL;
        free(deleter);
        printf("NODE DELETED!\n\n");
    }
}

void delNodeAtPosition(Node** ptr2head)
{
    //choose the node to be deleted
    int nodePosition = 0;
    printf("please enter number of node to be deleted in between: ");
    scanf("%d", &nodePosition);

    if(*ptr2head == NULL)
    {
        printf("NOTHING TO BE DELETED\n");
    }
    else
    {
        //delete from position
        //check list at least one node
        Node *checkNodePos = *ptr2head;
        int nodeCounter = 1;
        while ((*checkNodePos).nextNode != NULL)
        {
            checkNodePos = (*checkNodePos).nextNode;
            nodeCounter++;
        }
        if(nodePosition < nodeCounter)
        {
            //node has at least 2 nodes
            nodeCounter = 1;
            checkNodePos = *ptr2head;
            while (nodeCounter < nodePosition-1)
            {
                checkNodePos = (*checkNodePos).nextNode;
                nodeCounter++;
            }
            Node *deleter = (*checkNodePos).nextNode;
            (*checkNodePos).nextNode = (*deleter).nextNode;
            free(deleter);
            printf("NODE DELETED!\n\n");
        }
        else if(nodePosition > nodeCounter)
        {
            printf("out of list boundaries\n");
        }
        else
        {
            //node has than 2 nodes
            printf("NODE HAS LESS THAN 2 NODES TO DELETE BY THIS METHOD\n");
        }

    }
}
/****************************************DELETING NODES FUNCTIONS****************************************/

void printList(Node* headref)
{
    Node *nodePrinter = headref;
    //checking if list empty
    if(nodePrinter == NULL)
    {
        printf("NOTHING TO PRINT\n");
    }
    else
    {
        //list is not empty
        int nodeIndex = 1;
        while(nodePrinter != NULL)
        {
            printf("Node %d: %d\n", nodeIndex, (*nodePrinter).data);
            nodePrinter = (*nodePrinter).nextNode;
            nodeIndex++;
        }
    }
}

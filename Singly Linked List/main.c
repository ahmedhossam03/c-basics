#include "linked_list.h"

int main()
{
    //create head pointer
    Node *head = NULL;
    int ctrlr  = 0;
    int data = 0;
    do{
        printf("Please enter function choice:\n"
               "add node at beginning       press 1\n"
               "add node at end             press 2\n"
               "add node at position        press 3\n"
               "delete node at beginning    press 4\n"
               "delete node at end          press 5\n"
               "delete node at position     press 6\n"
               "print list                  press 7\n"
               "exit                        press 0\n");
        scanf("%d", &ctrlr);
        switch (ctrlr)
        {
        case 1:
            printf("please enter data to be added: ");
            scanf("%d", &data);
            addNodeAtBeginning(&head, data);
            break;
        case 2:
            printf("please enter data to be added: ");
            scanf("%d", &data);
            addNodeAtEnd(&head, data);
            break;
        case 3:
            printf("please enter data to be added: ");
            scanf("%d", &data);
            addNodeAtPosition(&head, data);
            break;
        case 4:
            delNodeAtBeginning(&head);
            break;
        case 5:
            delNodeAtEnd(&head);
            break;
        case 6:
            delNodeAtPosition(&head);
            break;
        case 7:
            printf("\n");
            printList(head);
            printf("\n");
            break;
        }
    }while (ctrlr != 0);

    return 0;
}

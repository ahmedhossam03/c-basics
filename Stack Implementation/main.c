#include "stack.h"

int main()
{
    Stack numbers;
    int x = 0;

    createStack(&numbers);
    printf("is Stack empty? %d\n", isStackEmpty(&numbers));

    push(&numbers, 20);
    push(&numbers, 30);
    push(&numbers, 40);
    push(&numbers, 20);
    push(&numbers, 30);
    printf("is Stack full? %d\n", isStackFull(&numbers));

    pop(&numbers, &x);
    printf("Stack Size: %d\n", stackSize(&numbers));

    printf("last value in stack: %d\n", x);

    return 0;
}

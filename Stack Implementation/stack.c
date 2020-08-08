#include "stack.h"

void createStack(Stack* ptrS)
{
    ptrS->top = 0;
}
void clearStack(Stack* ptrS)
{
    createStack(ptrS);
}

void push(Stack* ptrS, int data)
{
    ptrS->entry[ptrS->top] = data;
    ptrS->top++;
}

void pop(Stack* ptrS, int* data)
{
    ptrS->top--;
    *data = ptrS->entry[ptrS->top];
}

int isStackEmpty(Stack* ptrS)
{
    if(ptrS->top == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }

}

int isStackFull(Stack* ptrS)
{
    if(ptrS->top == MAXSIZE)
    {
        return 1;
    }
    else
    {
        return 0;
    }

}

int stackSize(Stack* ptrS)
{
    return ptrS->top;
}

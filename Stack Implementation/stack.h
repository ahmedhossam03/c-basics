#ifndef STACK_H_INCLUDED
#define STACK_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>

#define MAXSIZE 5

typedef struct{
    int top;
    int entry[MAXSIZE];
}Stack;

void createStack(Stack*);
void clearStack(Stack*);
void push(Stack*, int);
void pop(Stack*, int*);
int isStackEmpty(Stack*);
int isStackFull(Stack*);
int stackSize(Stack*);

#endif // STACK_H_INCLUDED

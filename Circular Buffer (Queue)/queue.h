#ifndef QUEUE_H_INCLUDED
#define QUEUE_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>

#define MAXSIZE 10

typedef struct queu
{
    int entry[MAXSIZE];
    int frnt;
    int rear;
    int qsize;
}Queue;

void createQueue(Queue*);
void clearQueue(Queue*);
void append(Queue*, int);
void serve(Queue*, int *);
int queueSize(Queue*);
int isQueueEmpty(Queue*);
int isQueueFull(Queue*);

#endif // QUEUE_H_INCLUDED

#include "queue.h"

void createQueue(Queue* ptrQ)
{
    ptrQ->frnt = 0;
    ptrQ->rear = -1;
    ptrQ->qsize = 0;
}

void clearQueue (Queue* ptrQ)
{
    createQueue(ptrQ);
}

void append (Queue* ptrQ, int newData)
{
    ptrQ->rear = (ptrQ->rear + 1) % MAXSIZE;
    ptrQ->entry[ptrQ->rear] = newData;
    ptrQ->qsize++;
}

void serve(Queue* ptrQ, int *servedData)
{
    *servedData = ptrQ->entry[ptrQ->frnt];
    ptrQ->frnt = (ptrQ->frnt + 1) % MAXSIZE;
    ptrQ->qsize--;
}

int queueSize(Queue* ptrQ)
{
    return ptrQ->qsize;
}

int isQueueEmpty(Queue* ptrQ)
{
    if (ptrQ->qsize == 0)
        return 1;
    else
        return 0;
}

isQueueFull(Queue* ptrQ)
{
    if (ptrQ->qsize == MAXSIZE)
        return 1;
    else
        return 0;
}

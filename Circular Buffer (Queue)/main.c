#include "queue.h"

int main()
{
    Queue numbers;
    int x = 0;

    createQueue(&numbers);

    append(&numbers, 300);
    append(&numbers, 400);
    append(&numbers, 500);
    append(&numbers, 300);
    append(&numbers, 400);
    append(&numbers, 500);
    append(&numbers, 300);
    append(&numbers, 400);
    append(&numbers, 500);
    append(&numbers, 300);

    printf("is buffer full %d\n", isQueueFull(&numbers));

    serve(&numbers, &x);
    printf("first serve = %d\n", x);

    serve(&numbers, &x);
    printf("second serve = %d\n", x);

    clearQueue(&numbers);
    printf("buffer size = %d\n", queueSize(&numbers));
    printf("is buffer empty = %d\n", isQueueEmpty(&numbers));

    return 0;
}

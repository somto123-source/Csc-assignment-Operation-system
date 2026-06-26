#include <stdio.h>
#include <pthread.h>

#define THREADS 5
#define COUNT 100000

int counter = 0;

void *increment(void *arg)
{
    for (int i = 0; i < COUNT; i++)
    {
        // No mutex protection
        counter++;
    }

    return NULL;
}

int main()
{
    pthread_t threads[THREADS];

    for (int i = 0; i < THREADS; i++)
    {
        pthread_create(&threads[i], NULL, increment, NULL);
    }

    for (int i = 0; i < THREADS; i++)
    {
        pthread_join(threads[i], NULL);
    }

    printf("Final Counter (Without Mutex) = %d\n", counter);

    return 0;
}

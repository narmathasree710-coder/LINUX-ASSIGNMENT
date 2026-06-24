#include <stdio.h>
#include <pthread.h>

void *print(void *arg)
{
    printf("Hello Thread\n");
    return NULL;
}

int main()
{
    pthread_t thread1;
    pthread_create(&thread1, NULL, print, NULL);
    pthread_join(thread1, NULL);

    return 0;
}

#include <stdio.h>
#include <pthread.h>
#include <semaphore.h>

sem_t sem;
void *sem_check(void *arg)
{
    sem_wait(&sem);
    printf("Thread Running\n");
    sem_post(&sem);
    return NULL;
}

int main()
{
    pthread_t t1, t2;
    sem_init(&sem, 0, 1);
    pthread_create(&t1,NULL,sem_check,NULL);
    pthread_create(&t2, NULL,sem_check,NULL);
    pthread_join(t1, NULL);
    pthread_join(t2, NULL);
    sem_destroy(&sem);
    return 0;
}

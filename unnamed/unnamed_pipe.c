#include <stdio.h>
#include <unistd.h>
#include <string.h>
int main()
{
    int fd[2];
    pipe(fd);
    if(fork() == 0)
    {
        char msg[50];
        read(fd[0], msg, sizeof(msg));
        printf("Child Received: %s\n", msg);
    }
    else
    {
        write(fd[1], "Hello Child", 12);
    }
    return 0;
}

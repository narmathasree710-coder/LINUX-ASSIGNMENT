#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

int main()
{
    char msg[50];
    int fd = open("myfifo", O_RDONLY);
    read(fd, msg, sizeof(msg));
    printf("%s\n", msg);
    close(fd);
    return 0;
}

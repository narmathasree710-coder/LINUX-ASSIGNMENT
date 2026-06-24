#include <stdio.h>
#include <sys/ipc.h>
#include <sys/msg.h>

struct msgbuf
{
    long type;
    char text[50];
};

int main()
{
    int msgid = msgget(1234, 0666);
    struct msgbuf msg;
    msgrcv(msgid, &msg, sizeof(msg.text), 1, 0);
    printf("%s\n", msg.text);
    return 0;
}

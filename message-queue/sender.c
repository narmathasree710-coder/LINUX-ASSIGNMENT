#include <stdio.h>
#include <sys/ipc.h>
#include <sys/msg.h>
#include <string.h>

struct msgbuf
{
    long type;
    char text[50];
};

int main()
{
    int msgid = msgget(1234, IPC_CREAT | 0666);
    struct msgbuf msg;
    msg.type = 1;
    strcpy(msg.text, "Hello Queue");
    msgsnd(msgid, &msg, sizeof(msg.text), 0);
    return 0;
}

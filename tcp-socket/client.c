#include <stdio.h>
#include <sys/socket.h>
#include <arpa/inet.h>
#include <unistd.h>

int main()
{
    int sfd;
    sfd = socket(AF_INET, SOCK_STREAM, 0);
    struct sockaddr_in server;
    server.sin_family = AF_INET;
    server.sin_port = htons(5000);
    server.sin_addr.s_addr = inet_addr("127.0.0.1");
    connect(sfd, (struct sockaddr*)&server, sizeof(server));
    send(sfd, "Hello TCP", 10, 0);
    close(sfd);
    return 0;
}

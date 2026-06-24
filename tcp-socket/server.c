#include <stdio.h>
#include <sys/socket.h>
#include <arpa/inet.h>
#include <unistd.h>

int main()
{
    int sfd, cfd;
    char msg[100];
    sfd = socket(AF_INET, SOCK_STREAM, 0);
    struct sockaddr_in server;
    server.sin_family = AF_INET;
    server.sin_port = htons(5000);
    server.sin_addr.s_addr = INADDR_ANY;
    bind(sfd, (struct sockaddr*)&server, sizeof(server));
    listen(sfd, 5);
    cfd = accept(sfd, NULL, NULL);
    recv(cfd, msg, sizeof(msg), 0);
    printf("Received: %s\n", msg);
    close(cfd);
    close(sfd);
    return 0;
}

#include <stdio.h>
#include <sys/socket.h>
#include <arpa/inet.h>
#include <unistd.h>

int main()
{
    int sfd;
    char msg[100];
    sfd = socket(AF_INET, SOCK_DGRAM, 0);
    struct sockaddr_in server, client;
    server.sin_family = AF_INET;
    server.sin_port = htons(5000);
    server.sin_addr.s_addr = INADDR_ANY;
    bind(sfd, (struct sockaddr*)&server, sizeof(server));
    socklen_t len = sizeof(client);
    recvfrom(sfd, msg, sizeof(msg), 0,
             (struct sockaddr*)&client, &len);
    printf("%s\n", msg);
    close(sfd);
    return 0;
}

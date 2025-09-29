#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <arpa/inet.h>
#include <sys/socket.h>
#include <netinet/in.h>

#define PORT 8080
#define BUFFER_SIZE 1024

int main()
{

    int server_fd, new_socket;
    struct sockaddr_in address;
    int addrlen = sizeof(address);
    char buffer[BUFFER_SIZE];

    // create socket
    server_fd = socket(AF_INET, SOCK_STREAM, 0);
    if (server_fd == 0)
    {
        perror("Socket Failed");
        exit(EXIT_FAILURE);
    }

    address.sin_family = AF_INET;
    address.sin_addr.s_addr = INADDR_ANY;
    address.sin_port = htons(PORT);

    if (bind(server_fd, (struct sockaddr *)&address, sizeof(address)) < 0)
    {
        perror("Bind faild");
        exit(EXIT_FAILURE);
    }

    // listen connection
    if (listen(server_fd, 5) < 0)
    {
        perror("Listen Failed");
        exit(EXIT_FAILURE);
    }

    printf("Server is Running on http://localhost:%d\n", PORT);

    // accept teh co9nnection
    new_socket = accept(server_fd, (struct sockaddr *)&address, (socklen_t *)&addrlen);

    if (new_socket < 0)
    {
        perror("Accept Failed");
        exit(EXIT_FAILURE);
    }

    // read client request
    read(new_socket, buffer, BUFFER_SIZE);
    printf("Client Request:\n%s\n", buffer);

    // send http response

    const char *http_response =
        "HTTP/1.1 200 OK\r\n"
        "Content-Type: text/html\r\n"
        "Connection: close\r\n"
        "\r\n"
        "<html><body><h1>Welcome to My C HTTP Server! on ArrayBLOG</h1></body></html>";

    write(new_socket, http_response, strlen(http_response));
    printf("Response sent to client\n");

    // close the socket
    close(new_socket);
    close(server_fd);

    return 0;
}
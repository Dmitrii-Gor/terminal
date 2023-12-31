#ifndef TCP_PUTTY_H_INCLUDED
#define TCP_PUTTY_H_INCLUDED

#include <winsock2.h>
#include <pthread.h>
#include <stdio.h>

#define WVERSION_REQUESTED 0x0202

struct thread_args
{
    SOCKET socket;
    int flag;
};


void receive_messages(struct thread_args *args);
void send_messages(SOCKET client_socket);
void init_win_socket();
void init_server_socket(SOCKET* server_socket, struct sockaddr_in* server_addr);
void listen_for_connections(SOCKET server_socket);
SOCKET accept_client_connection(SOCKET server_socket);
void init_client_socket(SOCKET* client_socket);
void connect_to_server(SOCKET client_socket, struct sockaddr_in* server_addr);



#endif // TCP_PUTTY_H_INCLUDED

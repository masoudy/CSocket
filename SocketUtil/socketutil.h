#ifndef SOCKETUTIL_SOCKETUTIL_H
#define SOCKETUTIL_SOCKETUTIL_H

#include <stdio.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <string.h>
#include <malloc.h>



struct sockaddr_in* createIPv4Address(char *ip, int port);

int createTCPIpv4Socket();


#endif //SOCKETUTIL_SOCKETUTIL_H

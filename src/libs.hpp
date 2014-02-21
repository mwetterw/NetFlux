#ifndef _LIBS_HPP_
#define _LIBS_HPP_

#include <sys/socket.h> // socket
#include <unistd.h> // close
#include <arpa/inet.h> // htonl, htons...
#include <netinet/in.h> // struct sockaddr_in
#include <netdb.h> // AF_UNSPEC

#ifdef DEBUG
#include <cerrno>
#include <cstdio>
#endif

#endif

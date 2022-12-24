// ./linux-x86_64/bin/musl-clang -v static.c -o static

#define _GNU_SOURCE
#include <stdio.h>
#include <netdb.h>

int main(int argc, char **argv)
{
    struct hostent *localhost = gethostbyname("localhost");
    printf("%s\n", argv[0]);
    printf("%s %s\n", localhost->h_name, localhost->h_aliases[0]);
    return argc;
}

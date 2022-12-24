// ./linux-x86_64/bin/musl-clang++ -v -fno-exceptions static.cpp -o static

#include <stdio.h>
#include <netdb.h>

namespace
{
    const auto i = 0;
    auto get_i() { return i; }

    class Class
    {
    public:
        Class() { printf("class()\n"); }
        ~Class() { printf("~class()\n"); }
    };
}

int main(int argc, char **argv)
{
    Class cls;
    struct hostent *localhost = gethostbyname("localhost");
    printf("%s\n", argv[0]);
    printf("%s %s\n", localhost->h_name, localhost->h_aliases[0]);
    return argc + get_i();
}

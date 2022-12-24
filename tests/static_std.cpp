// ./linux-x86_64/bin/musl-clang++ -v -fno-exceptions static_std.cpp -o static

#include <netdb.h>

#include <cstdio>
#include <iostream>

namespace
{
    const auto i = 0;
    auto get_i() { return i; }

    class Class
    {
    public:
        Class() { std::printf("class()\n"); }
        ~Class() { std::printf("~class()\n"); }
    };
}

int main(int argc, char **argv)
{
    Class cls;
    struct hostent *localhost = gethostbyname("localhost");
    std::printf("%s\n", argv[0]);
    std::printf("%s %s\n", localhost->h_name, localhost->h_aliases[0]);
    std::cout << "std::cout(" << 1 << ")" << std::endl;
    return argc + get_i();
}

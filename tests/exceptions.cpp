// ./linux-x86_64/bin/musl-clang++ -v exceptions.cpp -o static

#include <stdexcept>
#include <cstdio>

void run_exception()
{
    try
    {
        throw std::runtime_error("throw exception");
    }
    catch (...)
    {
        std::printf("catch all\n");
    }
}

void run_exception2()
{
    try
    {
        throw std::runtime_error("throw exception");
    }
    catch (const std::runtime_error &e)
    {
        std::printf("std::runtime_error: %s\n", e.what());
    }
}

int main(void)
{
    run_exception();
    run_exception2();
    return 0;
}

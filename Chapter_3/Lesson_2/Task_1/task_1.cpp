#include <iostream>
static int count = 0;

auto fib(unsigned int n)
{
    count++;
    std::cout << "count = " << count << std::endl;
    if (n <= 1)
        return n;
    return fib(n - 1) + fib(n - 2);
}


int main()
{
    std::cout << fib(10) << std::endl;
    return 0;
}

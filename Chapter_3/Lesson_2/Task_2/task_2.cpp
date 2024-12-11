#include <iostream>

auto fib(unsigned int n)
{
    size_t f[100];
    int i;
    f[0] = 0;
    f[1] = 1;
    for (int i = 2; i <= n; i++) {
        f[i] = f[i - 1] + f[i - 2];
    }
    return f[n];
}

int main()
{
    std::cout << fib(3) << std::endl;
    return 0;
}

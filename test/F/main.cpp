#include <iostream>

int main()
{
    setlocale(LC_ALL, "");
    int N, trib, trib1, trib2; trib3;
    trib1 = 0, trib2 = 1; trib3 = 1;
    std::cout << "N: "; std::cin >> N;
    while (true)
    {
        fib = fib1;
        if (fib + fib2 > N) break;
        fib1 = fib + fib2;
        fib2 = fib;
    }
    std::cout << "Fibonacci: " << fib;
    return 0;
}

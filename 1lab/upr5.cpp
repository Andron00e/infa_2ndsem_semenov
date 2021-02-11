#include <iostream>

int main()
{
    int N;

    std::cout << "Enter the number of stars: ";
    std::cin >> N;
    std::cout << std::endl;

    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < N-i; j++)
        {
            std::cout << " * ";
        }
        std::cout << std::endl;
    }
    return 0;
}

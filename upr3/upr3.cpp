#include <iostream>

int main()
{
    int number_of_stars;

    std::cout << "Enter the number of stars: ";
    std::cin >> number_of_stars;
    std::cout << std::endl;

    for(int i = 0; i < number_of_stars; i++)
    {
        for(int j = 0; j < number_of_stars; j++)
        {
            std::cout << " * ";
        }
        std::cout << std::endl;
    }
    return 0;
}

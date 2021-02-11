#include <iostream>

int main()
{
    int N;
    std::cin>> N;
    if (N % 4 != 0)
    {
        std::cout<<"NO"<<std::endl;
    }
    else if (N%100==0)
    {
        if (N%400==0) std::cout<<"YES"<<std::endl;
        else std::cout<<"NO"<<std::endl;
    }
    else std::cout<<"YES"<<std::endl;

    return 0;
}

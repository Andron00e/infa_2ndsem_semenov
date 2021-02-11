#include <iostream>

int main()
{
    int a, Maxim;

    std::cin>>a;
    Maxim=0;
    while (a!=0)
    {
        if ((a % 2 == 0) && (a>Maxim)) Maxim = a;
        std::cin>>a;
    }
    std::cout<<' '<<std::endl;
    std::cout<<"The greatest term is "<<Maxim<<std::endl;
    return 0;
}

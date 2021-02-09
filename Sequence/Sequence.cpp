#include <iostream>

int main()
{
    int a,even_quantity=0;
    std::cin>>a;
    while(a!=0)
    {
        if (a%2==0) even_quantity++;
        std::cin>>a;
    }
    std::cout<<' '<<std::endl;
    std::cout<<"sequence term quantity "<<even_quantity<<std::endl;
    return 0;
}

#include <iostream>

int main() {

    int a, b;
    std::cin>>a;
    std::cin>>b;
    for (int i = a; i > 0; i--) {
        if (a % i == 0 && b % i == 0) {
            std::cout<< "gcd = "<<i<<std::endl;
            break;
        }
    }
    return 0;
}

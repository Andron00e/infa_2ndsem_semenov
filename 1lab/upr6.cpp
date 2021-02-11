#include <iostream>

int main()
{
    int N;

    std::cout << "Enter the number of stars: ";
    std::cin >> N;
    std::cout << std::endl;

   for(int i = 0; i <= N / 2; i++){
		 std::cout << "";
		for(int j = 0; j < i; j++){
			 std::cout <<  " ";
		}
		for(int j = 0; j < N-2*i; j++){
			 std::cout << "*";
		}
		 std::cout <<  std::endl;
	}
	 std::cout << std::endl;
    return 0;
}

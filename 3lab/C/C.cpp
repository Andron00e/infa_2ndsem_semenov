#include <iostream>
using std::cin;
using std::cout;
using std::endl;

void print_array(int* p){
		for (int i = 0; i < 6; i++){
			std::cout << p[i];
			if (i == 5){
				std::cout << "\n";
			} else {
				std::cout << " ";
			}
		}
	return;
	}

int main() {
    int a[6];
    for (int i = 0; i < 6; i++)
    cin >> a[i];
    print_array(a);
    return 0;
}


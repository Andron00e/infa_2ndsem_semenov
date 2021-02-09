#include <iostream>
using namespace std;

int main(){
	int v;
	string license;

	int salary = 0;
	while(cin >> v >> license){
		if(license == "A999AA")
			break;
		if(v > 60){
			int repeats = 1;
			bool has_not_found = true;
			for(int i = 1; i < 4 && has_not_found; i++){
				for(int j = i + 1; j < 4; j++){
					if(license[j] == license[i]){
						repeats++;
						has_not_found = false;
					}
				}
			}

			if(repeats == 3)
				salary += 1000;
			else if(repeats == 2)
				salary += 500;
			else
				salary += 100;
		}
	}
	cout << salary << endl;

	return 0;
}

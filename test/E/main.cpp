#include <iostream>
#include <stdlib.h>

using namespace std;

bool is_equal_salary(Employee* e, unsigned int n)
{

	int Nm = 0;
	int Nf = 0;
	int x = 0;
	int y = 0;
	double S, Z, rez;
	for (int i = 0; i < n; i++) {
		if (e[i].is_male == true) {
			Nm++;
			x += e[i].salary;
		}
		else {
			Nf++;
			y += e[i].salary;
		}
	}

	S = (x / Nm);
	Z = (y / Nf);
	rez = abs(S - Z) / std::min(S, Z);
	if (rez*100 > (5)) return false;
	else return true;
	}

int main()
{
    is_equal_salary()
    return 0;
}

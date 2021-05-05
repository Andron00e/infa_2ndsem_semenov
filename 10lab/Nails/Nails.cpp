#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;

int coords[201];
int lenght[1001];

int main()
{
	int n;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> coords[i];
	}

	sort(coords, coords + n);

	lenght[0] = 0;
	lenght[1] = coords[1] - coords[0];
	lenght[2] = coords[2] - coords[0];

	for (int i = 3; i < n; i++)
	{
		lenght[i] = min(lenght[i - 1], lenght[i - 2]) + coords[i] - coords[i - 1];
	}

	cout << lenght[n - 1];


	return 0;
}

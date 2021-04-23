#include <iostream>
using namespace std;

void reverse()
{
    int N;
    if (cin >> N)
    {
        reverse();
        cout << N << "\n";
    }
}

int main()
{
    reverse();
    return 0;
}

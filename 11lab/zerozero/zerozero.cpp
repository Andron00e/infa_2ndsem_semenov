#include <iostream>

using namespace std;

int main()
{
    int number[18];
    int K, N;
    cin >> N >> K;
    number[0] = 1;
    number[1] = K - 1;
    for (int i = 2; i <= N; i++)
    {
        number[i] = (number[i - 1] + number[i - 2]) * (K - 1);
    }
    cout << number[N] << endl;
    return 0;
}

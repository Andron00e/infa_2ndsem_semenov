#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int d[100];
    int exchange[1000][500];
    int S;
    int N;
    cin >> S >> N;
    for (int i = 1; i <= N; i++)
    {
        cin >> d[i];
    }
    for (int i = 0; i <= N; i++)
    {
        exchange[0][i] = 0;
    }
    for (int i = 1; i <= S; i++)
    {
        exchange[i][0] = S + 1;
    }


    sort(d, d + N);

    for (int j = 1; j <= N; j++)
    {
        for (int i = 1; i <= S; i++)
        {
            if (d[j] > i)
                exchange[i][j] = exchange[i][j - 1];
            else
                exchange[i][j] = min(exchange[i][j - 1], exchange[i - d[j]][j] + 1);
        }
    }


    cout << exchange[S][N] << endl;



    return 0;
}


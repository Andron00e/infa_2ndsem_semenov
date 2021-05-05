#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int value[50];
    int weights[100];
    int knapsack[1000][50];
    int W;
    int N;
    cin >> W >> N;

    for (int i = 1; i <= N; i++)
    {
        cin >> value[i];
    }

    for (int i = 1; i <= N; i++)
    {
        cin >> weights[i];
    }

    for (int i = 0; i <= N; i++)
    {
        knapsack[0][i] = 0;
    }

    for (int i = 0; i <= W; i++)
    {
        knapsack[i][0] = 0;
    }

    for (int j = 1; j <= N; j++)
    {
        for (int i = 1; i <= W; i++)
        {
            if (i >= weights[j])
            {
                knapsack[i][j] = max(knapsack[i - weights[j]][j - 1] + value[j], knapsack[i][j - 1]);
            }
            else
            {
                knapsack[i][j] = knapsack[i][j - 1];
            }
        }
    }

    cout << knapsack[W][N] << endl;
    return 0;
}

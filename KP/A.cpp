#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;

int main()
{
    int N;
    cin >> N;

    vector<int> arr(N);

    for (int i = 0; i < N; i++)
    {
        ll f, k;
        cin >> f >> k;
        arr[i] = 100000000 * f + k;
    }

    sort(arr.begin(), arr.end());

    for (int i = 0; i < N; i++)
    {
        int h1 = i + 1;
        int h2 = i + 2;
        while (h1 < N && h2 < N)
        {
            if (arr[i] + arr[h1] == arr[h2])
            {
                cout << "YES";
                return 0;
            }
            if (arr[i] + arr[h1] < arr[h2] && h1 < h2 - 1)
            {
                h1++;
            }
            else
            {
                h2++;
            }
        }
    }

    cout << "NO";
    return 0;
}

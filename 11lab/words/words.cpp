#include <iostream>
using namespace std;

bool is_prefix(string* u, string* v)
{
    if ((*u).size() > (*v).size()) return false;
    else
    {
        int length = (*u).size();
        for (int i = 0; i < length; i++)
        {
            if ((*u)[i] != (*v)[i]) return false;
        }
    }

    return true;
}

string words[256];
int temp[256] = { 0 };

int main()
{
    int m;
    cin >> m;
    for (int i = 1; i <= m; i++)
    {
        cin >> words[i];
    }

    temp[1] = 1;
    int res = 1;
    for (int i = 2; i <= m; i++)
    {
        for (int j = 1; j < i; j++)
            if (is_prefix(&words[j], &words[i]) && ((temp[j] + 1) > temp[i]))
                temp[i] = temp[j] + 1;

        if (temp[i] > res) res = temp[i];
    }

    cout << res << endl;
}

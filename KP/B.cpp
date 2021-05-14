#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

struct Abonent {
    string name;
    string number;
    long int debt;
};

bool comp (Abonent a, Abonent b) {
    if (a.debt != b.debt) return a.debt > b.debt;
    else {
        if (a.name != b.name) return a.name < b.name;
        else return a.number < b.number;
    }
}

int main () {
int n, j;
cin >> n;
vector<Abonent> sp(n);
for (j = 0; j < n; ++j)
    cin >> sp[j].name >> sp[j].number >> sp[j].debt;
sort(sp.begin(), sp.end(), comp);
for (j = 0; j < min(n, 10); ++j)
    cout << sp[j].name << " " << sp[j].number << " " << sp[j].debt << endl;
return 0;}

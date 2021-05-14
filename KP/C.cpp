#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;

struct Struct {
    string name;
    string phone;
    long int money;
};

bool comp (Struct a, Struct b) {
    if (a.money != b.money){
        return a.money < b.money;
    }
    else {
        if (a.name != b.name){
            return a.name < b.name;
        }
        else{
            return a.phone < b.phone;
        }
    }
}

int main () {
    int N;
    cin >> N;
    vector<Struct> data(N);
    for (int i = 0; i < N; i++){
        cin >> data[i].name;
        cin >> data[i].phone;
        cin >> data[i].money;
    }

    sort(data.begin(), data.end(), comp);

    bool un_found = true;
    int num = 0;
    while(un_found&&(num<N)){
        if(data[num].money>0){
            un_found = false;
        }
        else{
            num++;
        }
    }

    for (int i = 0; i < min(num, 10); i++){
        cout << data[i].name << " ";
        cout << data[i].phone << " ";
        cout << data[i].money << endl;
    }
return 0;}


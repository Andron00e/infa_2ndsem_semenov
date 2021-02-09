#include <iostream>
using namespace std;

int fact(int N)
{
    if(N < 0)
        return 0;
    if (N == 0)
        return 1;
    else
        return N * fact(N - 1);
}

int main()
{
    int N;
    cin>>N;
    cout<<' '<<endl;
    if ((fact(N-1) + 1)%N==0)
    {
        cout<<"1"<<endl; //Теорема Вильсона
    }
    else
    {
        cout<<"0"<<endl;
    }
    return 0;
}

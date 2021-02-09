#include <iostream>

using namespace std;

int main(){
	int n;
	cin>>n;

	bool p=1;
	for(int i=2; i<n; i++)
	{
		if(n%i==0)
        {
			p=0;
			break;
		}
	}
	cout <<p<< endl;

	return 0;
}

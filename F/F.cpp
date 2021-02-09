#include <iostream>

using namespace std;

int main()
{
	int arr[10001];

	int max=0;
	int length=0;
	for(int i=0; i<10001; i++)
    {
		cin>>arr[i];
		if(arr[i]==0)
        {
			length=i;
			break;
		}
		if(arr[i] > max)
			max=arr[i];
	}

	int N=0;
	for(int i=0; i<length; i++)
    {
		if(max==arr[i])
        {
			N++;
		}
	}
	cout<<' '<<endl;
	cout<<N<<endl;

	return 0;
}

#include <iostream>


int main()
{
	int N;
	std::cin>>N;

	while(N%2==0)
    {
		N/=2;
	}
	if(N>1)
	{
	    std::cout <<"NO"<<std::endl;
	}
	else
    {
        std::cout<<"YES"<<std::endl;
    }
	return 0;
}

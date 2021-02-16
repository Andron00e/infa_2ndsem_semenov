#include <iostream>

int main()
{
    int n;
    int answer=0;
    float average=0;
    std::cin>>n;
    int* arr=new int[n];
    for(int i=0; i<n; i++)
    {
        std::cin>>*(arr + i);
        average+=*(arr + i);
    }
    average=average/n;

    for (int i=0; i<n; i++)
    {
        if (*(arr + i) > average) answer += *(arr + i);
    }

    delete[] arr;
    std::cout<<answer<<std::endl;
    return 0;
}

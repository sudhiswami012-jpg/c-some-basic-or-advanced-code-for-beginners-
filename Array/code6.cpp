#include<iostream>
using namespace std;

int main()
{
    int arr[5]{0,1,23,2,4,};
    int min = arr[0];
    for (int  i = 0; i < 5; i++)
    {
        if (arr[i] < min )
        {
            min = arr[i];
        }
        
    }
    cout<<"Smallest  : "<<min;
    return 0;

}
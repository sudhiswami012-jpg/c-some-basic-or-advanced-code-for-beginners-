#include<iostream>
using namespace std ;

int main()
{
    int arr[5]{1,2,3,4,98};
    int max = arr[0];
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
        
    }
    cout<<"Largest = "<<max;
    return 0 ;
    
}
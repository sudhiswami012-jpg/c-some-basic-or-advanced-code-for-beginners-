#include<iostream>
using namespace std;

int main()
{
    
    int sum;
    int arr[5] {4 ,5,6,8,9};
        for (int i = 0; i < 5; i++)
    {
        
        sum += arr[i]; 
    }
       cout<<"Sum = "<<sum<<endl;

       return 0;

    
}
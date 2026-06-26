#include<iostream>
using namespace std;

int main()
{
    int n;
    float num , product = 1;
     cout <<"How Many Numbers Do You Want To Multiply ?";
    cin >>n;

    for (int i = 1; i <= n ; i++)
    {
      cout<<"Enter Number " << i << " : ";
      cin >> num;

      product = product*num;
    } 
    cout <<"Multiplication = " << product << endl;
    
    return 0;
    
    
}
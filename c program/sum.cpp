#include <iostream>
using namespace std;

int main()
{
    int n ;
    float num , sum = 0;

    cout <<"Hoe Many Numbers do you want to add ? ";
    cin >> n;
    
    for(int i = 1; i <= n ; i++)
    {
        cout << "Enter number : " << i << " : ";
        cin >> num;
        sum = sum + num; 

    }
      cout<<"Sum = "<< sum << endl;
      
    return 0;
    
}
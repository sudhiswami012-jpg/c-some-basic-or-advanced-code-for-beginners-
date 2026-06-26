#include <iostream>
using namespace std;

int main()
{
    int n;
    double num , result ;

    cout <<"How many numbers? ";
    cin >> n;

    cout <<"Enter number 1 : ";
    cin >> result;

    for(int i = 2; i <= n ; i++)
    {
        cout <<"Enter number "<< i << " : ";
        cin >> result;
        result = result - num;
    }
    cout <<"Substraction = " << result << endl;

    return 0;

}
#include<iostream>
using namespace std;

int main()
{
    int markes;
    cin>> markes;

    if (markes>=90)
    {
        cout<<"topper";
    }
    else if (markes>=70)
    {
        cout<<"Keep it up";
    }
    else if (markes>=35)
    {
        cout<<"You pass my boy ";
    }
    else
    {
        cout<<"You fail buddy ";
    }
    return 0;
}  
    
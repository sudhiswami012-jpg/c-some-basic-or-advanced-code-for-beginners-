#include<iostream>
using namespace std;
 
int main()

{
    int choice;
    cout<<"Choose divison type : \n";
    cout<<"1 : Normal divison \n";
    cout<<"2 : Decimal division \n";
    cin>>choice;

    if(choice == 1)
    {
        int a,b;

        cout << "Enter first number: ";
        cin>>a;

        cout<< "Enter second number: ";
        cin>>b;
        if (b != 0)
        
        cout << "Resuly = " <<a/b << endl;
         
        else
        cout << "Cannot divide by zero!";   
    }
    else if (choice == 2)
    {
        double a,b ;
        cout << "Enter first number: ";
        cin >> a;

        cout <<"Enter second number: ";
        cin >> b;

        if(b != 0)
          cout << "Result = " <<a/b << endl;
          else
          cout << "Cannot divide by zero!";
    }
    else
    {
        cout << "invalid choice!";
    }
    return 0;
}



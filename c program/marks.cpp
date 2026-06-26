#include <iostream>
using namespace std;

int main()
{
    string name;
    string studentclasses;
    int age;
    float marks;
    char grade;

    cout<<"Enter Your Name: ";
    cin >> name;

    cout <<"Enter Your Age: ";
    cin >> age;

    cout<<"Enter Your Marks: ";
    cin >> marks;

    cout<<"Enter your grades: ";
    cin >> grade;
    
    cout<<"Enter yout class: ";
    getline(cin >> ws, studentclasses);

    cout <<"\n-------------------student details------------------------\n";
    cout << "Name : " <<name << endl;
    cout << "Age :  " <<age << endl;
    cout << "Marks : "<<marks <<endl;
    cout <<"Grade : " <<grade <<endl;
    cout <<"class : " <<studentclasses <<endl;
     
    if(marks >= 33)
    {
        cout <<"\nResult : Pass" <<endl;
        cout <<"khuub bhalo dikra" << endl;

    } 
    else
    {
        cout <<"\nResult : fail " <<endl;
        cout<<"or chalao phone " <<endl;

    }
   return 0;
}
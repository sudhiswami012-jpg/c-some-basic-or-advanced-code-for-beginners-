#include<iostream>
using namespace std;

struct empolyee{

    int id;
    float salary ;

};

int main()
{
    empolyee s1;
    s1.id = 45;
    s1.salary = 35000;
    cout<<"Employ id : "<<s1.id<<endl<<"Employee Salary : "<<s1.salary<<endl;
    return 0;
    
}
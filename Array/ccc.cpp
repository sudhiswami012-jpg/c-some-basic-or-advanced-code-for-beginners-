#include <iostream>
using namespace std;

struct student
{
    string name;
    int age ;

    float year;
};

int main()
{
    student s1;
    s1.name = " prateek ";
    s1.age = 20;
    s1.year = 2026;
    cout<<" your name  "<<s1.name<<endl;
    cout<<"age"<<s1.age<<endl;
    cout<<"year"<<s1.year<<endl;
    return 0;

}

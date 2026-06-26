#include<iostream>
using namespace std;

struct student 
{
   int age ;

};

int main()
{
    student s1 , s2 ;
    s1.age = 20;
    s2.age = 18;
    cout<<" age : "<<s1.age<<endl<<" age : "<<s2.age<<endl;
    return 0;

}
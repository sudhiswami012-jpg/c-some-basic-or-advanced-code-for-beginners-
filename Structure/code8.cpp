#include<iostream>
using namespace std;

struct student
{
  string name;
  int age;  
};

int main()
{
    student s1;
    s1.name = "Suddhi swami";
    s1.age = 20;
    cout<<"Name is : "<<s1.name<<endl<<"Age is : "<<s1.age<<endl;
    return 0;

}

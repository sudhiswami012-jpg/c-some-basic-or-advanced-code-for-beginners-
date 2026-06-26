#include<iostream>
using namespace std;

struct student
{
    int age;
};
  
 int main()
 {
    student s1;
    student * ptr = &s1;
    ptr -> age = 20;
    cout<<ptr ->age;
    

    return 0;

 }

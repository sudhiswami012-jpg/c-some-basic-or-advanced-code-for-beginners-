#include <iostream>
using namespace std;

struct student {
    int age;
};

int main()
{
    student s[3];
    s[0].age = 18;
    s[1].age = 20;
    s[2].age = 19;

    cout<<s[0].age<<endl<<s[1].age<<endl<<s[2].age<<endl;
    return 0;

}
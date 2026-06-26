#include<iostream>
using namespace std;

struct student
{
    string name , classes ;
    float marks;
    int age ;
};
    int main()
    {
        student s1 , s2 , s3;
        s1.name = "Prateek";
        s1.classes = " 3rd sem ";
        s1.age = 19 ;
        s1.marks = 78.6;
        s2.name = "Karan";
        s2.classes = " 4th sem ";
        s2.age = 22;
        s2.marks = 80.69;
        s3.name = "Mahander";
        s3.classes = " 5th sam ";
        s3.age = 25;
        s3.marks = 79.80;
        cout<<"Student  "<<"Classes   "<<"  Age "<<"  Marks "<<endl;
        cout<<s1.name<<"   "<<s1.classes<<"   "<<s1.age<<"   "<<s1.marks<<endl;
        cout<<s2.name<<"     "<<s2.classes<<"   "<<s2.age<<"   "<<s2.marks<< endl;
        cout<<s3.name<<"  "<<s3.classes<<"   "<<s3.age<<"   "<<s3.marks<<endl;
        return 0;


    }

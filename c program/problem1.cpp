#include<iostream>
using namespace std;

int main()
{
      int marks;
      cout<<"Tell me your marks:  ";
      cin>>marks;

      if (marks>=90)
      {
        cout<<"Topper student"<<endl;
      }
      else if (marks>=80)
      {
        cout<<"Above avrage student"<<endl;
     }
     else if (marks>=70)
     {
        cout<<"Avrage student "<<endl;     
     }
     else if (marks>=50)
     {
       cout<<"Below avrage student"<<endl;

     }
     else
     {
        cout<<"Fail student"<<endl;
     }
     return 0;
      
      
}
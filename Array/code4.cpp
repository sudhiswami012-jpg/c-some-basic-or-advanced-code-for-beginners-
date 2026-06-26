#include<iostream>
using namespace std;

int main()
{
    int arr[5]{10,20,3,40,50};
    int sum = 0;
   for (int i = 0; i < 5; i++)
   {
    sum += arr[i];

   }
   cout<<"average = "<<sum / 5.0;
   return 0;   
    
}
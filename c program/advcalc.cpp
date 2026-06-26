#include <iostream>
#include<cmath>
using namespace std;

int main()
{
    int choice ,n ;
    double num ,result , a , b;
    char op;

    cout <<"============Advance Calculator===============\n";
    cout<< "1. Addition \n";
    cout<<"2. substraction \n";
    cout<<"3. Multiplication\n";
    cout<<"4. Division\n";
    cout<<"5. power\n";
    cout<<"6. Square root\n";
    cout<<"7. percentage\n";
    cout<<"8. Mixed Calculation\n";

    cout<<"\nEnter your choice : ";
    cin>> choice;

    switch(choice)
    {
        case 1:
          cout<<"How many numbers? ";
          cin>>n;

          result = 0;
          for (int i = 1; i <= n; i++)
          {
            cout<<"Enter number "<<i<<" : ";
            cin>> num;
            result += num;

          }
          cout << "Sum = "<< result << endl;
          break;

        case 2:
           cout <<"How many numbers? ";
           cin >> n;

           cout << "How many numbers? ";
           cin>>n;
           cout <<"Enter number 1: ";
           cin >>result;
           for (int i = 2; i <= n; i++)
           {
            cout<<"Enter number " << i << " : ";
            cin>> num;
            result -= num;
           }
           
           cout<<"Substartion = " << result << endl;
           break;

     case 3:
       cout <<"How many numbers? ";
       cin>>n;

    result = 1;
    for (int i = 1; i <= n; i++)
    {
        cout<<"Multiplcation = " <<i<< " : ";
        cin>> num;
        result *= num;

    }
        cout << "Multiplication = "<<result<< endl;
        break;

    case 4 :
    
     cout<<"How many numbers? ";
     cin>> n;
      
     cout <<"Enter number 1 : ";
     cin>> result;
     for (int i = 2; i <= n; i++)
     {
        cout<<"Enter number "<<i<<" : ";
        cin>> num;

        if(num == 0)
        {
            cout<<"Cannot divide by zero!" << endl;
                return 0;
        
        }
        result /= num;
    }
           cout<<"Division"<<result<<endl;
                    break;

     case 5:
           
         cout<<"Enter base number : ";
         cin>>a;

         cout<<"Enter power : ";
         cin>>b;

         cout<<"Result = " <<pow(a,b)<<endl;
         break;
          
           case 6:

           cout<<"Enter number: ";
            cin >> a;

            cout << "square root = "<<sqrt(a)<< endl;
             break;

          case 7 :
            cout<< "Enter Obtained Marks: ";
            cin>>a;
             
            cout<<"Enter total marks : ";
            cin>>b;

            cout<<"Percentage = " << (a/b)*100 << "%" << endl;
              break;
          
            case 8:
              
              cout << "Enter first number: ";
              cin>> result;

              while (true)
              {
                cout <<"\nEnter Operation (+,-,*,/,=): ";
                cin>>op;

                if(op == '=')
                   break;

                   cout<<"Enter next number : ";
                    cin>> num;

                    switch (op)
                    {
                    case '+':
                        result += num;

                        break;
                    case '-':
                      result -= num;

                    case '*':
                       result *= num;

                    case '/':
                     if(num != 0)
                      result /= num;
                      
                      else
                      {
                        cout<< "Cannot Divide by zero " << endl;
                                return 0;                                
                      }
                       break;


                    
                    default:
                      cout <<"Invalid operation! "<<endl;

                    
                    }
                    cout<<"Current Result = "<< result <<endl;

              }
              cout<<"\nFinal result = "<< result << endl;
                           break;

                     default:
                     cout<<"Invalid choice!"<<endl;


              
     

    }
    return 0;
    
}
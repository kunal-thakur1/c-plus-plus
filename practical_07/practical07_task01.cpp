#include<iostream>
using namespace std;
int main()
{
   int n;
   cout<<"enter your choice :  ";
   cin>>n;
   switch(n)
   {
       case 1:
           cout<<" year : 2021";
           break;
       case 2:
           cout<<"montha : october";
           break;
       case 3:
           cout<<"date : 13/10/2021";
           break;
        case 4:
           cout<<"10:00:00";
           break;
        default:
             cout<<"invalid choice";
             
    }
    return 0;
}
        
     

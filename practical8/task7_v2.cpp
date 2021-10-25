#include<iostream>
using namespace std;
void swap(int &, int &);
int main()
{
   int a=10;
   int b=20;
   cout<<"before swapping a="<<a <<"b = " <<b<<endl;
   swap(a,b);
   cout<<"after call by reference swapping (in main) a= "<< a <<"b = "<<b<<endl;
}
void swap(int &a,int &b)
{
  int temp;
  temp=a;
  a=b;
  b=temp;
  cout<<"after call by value swapping (in function) a= "<< a <<"b = "<<b<<endl;
}

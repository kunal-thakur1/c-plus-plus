#include<iostream>
using namespace std;
void swap(int *, int *);
int main()
{
   int a=10;
   int b=20;
   cout<<"before swapping values in main a="<<a <<"b = " <<b<<endl;
   swap(&a,&b);
   cout<<"after  swapping in main  a= "<< a <<"b = "<<b<<endl;
}
void swap(int *a,int *b)
{
  int temp;
  temp=*a;
  *a=*b;
  *b=temp;
  cout<<"after swapping values in function  a= "<< *a <<"b = "<<*b<<endl;
}

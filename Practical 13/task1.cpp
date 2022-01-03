#include<iostream>
using namespace std;
class base
{
  public:
  int add(int a,int b)
  {
      return (a+b);
  }
  float add(float a,float b)
  {
     return (a+b);
  }
  int add(int a,int  b,int c)
  {
     return (a+b+c);
  }
};

class child: public base
{
  public:
  using base::add;
  int add(int a,int b)
  {
     return (a+b+1);
  }
};

int main()
{
  base  obj1;
  child obj2;
  cout<<obj2.add(5.1f,10.1f);
}



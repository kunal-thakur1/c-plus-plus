#include<iostream>
#include<string>
using namespace std;
int main()
{
  string a;
  int count=0;
  getline(cin,a);
  for(int i=0;i<a.length();i++)
  {
    if(a[i]!=a[a.length()-i-1])
    {
      count=1;
      break;
    }
  }
  
  if(count)
  {
    cout<<"string is not palindrome"<<endl;
  }
  else
  {
    cout<<" palindrome";
  }
  return 0;
}

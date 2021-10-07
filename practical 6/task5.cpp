#include<iostream>
using namespace std;
int  main()
{
   string s1="ABC";
   string s2="abc";
   int x=s1.compare(s2);
   cout<<x;
   if(x==0)
      cout<<"equal"<<endl;
   else if(x>0)
      cout<<"larger "<<endl;
   else
      cout<<" smaller"<<endl;
   return 0;
}

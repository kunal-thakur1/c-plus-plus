#include<iostream>
namespace first{
   int add(int x,int y)
   {
      std::cout<<"int";
      return(x+y);
   }
}
namespace second{
   float add(float x,float y)
   { 
      std::cout<<"float"; 
      return(x+y);
   }
}
using namespace first;
using namespace second; 
 
 int main()
{
   int a,b;
   float q,w;
   std::cin>>a;
   std::cin>>b;
   std::cout<<"sum of int ";
   std::cout<<add(a,b)<<std::endl;
   std::cin>>q;
   std::cin>>w;
   std::cout<<"sum of float ";
   std::cout<<add(q,w);
   return 0;
}



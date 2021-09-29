#include<iostream>
namespace first{
   int add(int x,int y)
   {
      return(x+y);
   }
}
namespace second{
   float add(float x,float y)
   {  
      return(x+y);
   }
}
 int main()
{
   int a,b;
   float q,w;
   std::cin>>a;
   std::cin>>b;
   std::cout<<"sum of int ";
   std::cout<<first::add(a,b)<<std::endl;
   std::cin>>q;
   std::cin>>w;
   std::cout<<"sum of float ";
   std::cout<<second::add(q,w);
   return 0;
}

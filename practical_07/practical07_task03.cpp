#include<iostream>
using namespace std;
int main()
{
   int n=3,m=3;
   int a[3][3] = {1,2,3,4,5,6,7,8,9};
   int i,j;
   for (i=n-1;i>=0;i--)
   {
       for(j=m-1;j>=0;j--)
       {
           cout<<a[i][j] <<" " ;
        }
        cout<<endl;

    }
   
    return 0;
}
   

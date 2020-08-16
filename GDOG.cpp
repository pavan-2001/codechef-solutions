#include <iostream>

using namespace std;
int main() 
{   int t;
   cin>>t;
   while(t--)
   {  int a,b;
      cin>>a>>b;
      int max=0;
      for(int i=1;i<=b;i++)
      {
        if(max<a%i)
        {
          max=a%i;
        }
      }
      cout<<max<<endl;
    }  
 return 0;
}
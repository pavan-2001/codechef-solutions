#include <iostream>
using namespace std;
int main() 
{
  int t,n,sum=0;
  cin>>t;
  while(t--)
  {
    cin>>n;
    if(n>=1&&n<10)
    {
      cout<<n<<endl;
    }
    if(n>=10&&n<100)
    {
       int x=n%10;
       int b=n/10;
        sum=x+b;
      cout<<sum<<endl;
    }
    if(n>=100&&n<1000)
    {
       int x=n/100;
       int c=n%10;
       sum=x+c;
      cout<<sum<<endl;
    }
    if(n>=1000&&n<10000)
    {
      int x=n/1000;
      
      int c=n%10;
      
      sum=x+c;
      cout<<sum<<endl;
    }
    if(n>=10000&&n<100000)
    { 
      int f=n/10000;
      
      int e=n%10;
      sum=f+e;
      cout<<sum<<endl;
    }
    if(n>=100000&&n<1000000)
    { int h=n/100000;
      
      int e=n%10;
      sum=h+e;
      cout<<sum<<endl;
    }
    if(n==1000000)
    {
      cout<<1;
    }
  }
  return 0;
}

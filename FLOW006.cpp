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
       int b=n%100;
       int a=b/10;
       int c=b%10;
       sum=x+a+c;
      cout<<sum<<endl;
    }
    if(n>=1000&&n<10000)
    {
      int x=n/1000;
      int a=n%1000;
      int b=a/100;
      int c=a%100;
      int d=c/10;
      int e=c%10;
      sum=x+b+d+e;
      cout<<sum<<endl;
    }
    if(n>=10000&&n<100000)
    { 
      int f=n/10000;
      int g=n%10000;
      int x=g/1000;
      int a=g%1000;
      int b=a/100;
      int c=a%100;
      int d=c/10;
      int e=c%10;
      sum=x+b+d+e+f;
      cout<<sum<<endl;
    }
    if(n>=100000&&n<1000000)
    { int h=n/100000;
      int i=n%100000;
      int f=i/10000;
      int g=i%10000;
      int x=g/1000;
      int a=g%1000;
      int b=a/100;
      int c=a%100;
      int d=c/10;
      int e=c%10;
      sum=x+b+d+e+f+h;
      cout<<sum<<endl;
    }
    if(n==1000000)
    {
      cout<<1;
    }
    
  }
  return 0;
}
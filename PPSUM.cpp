#include <iostream>

using namespace std;
int main() 
{
 int a;
 cin>>a;
 while(a--)
 {
    int b,n,sum=0,sum1=0;
    cin>>b>>n;
    if(b==1)
    {
      sum=((n*(n+1))/2);
      n=sum;
    }
    else
    {
      while(b--)
      { 
        sum=((n*(n+1))/2);
        n=sum;
      }
    }

cout<<n<<endl;
 }
 return 0;
}
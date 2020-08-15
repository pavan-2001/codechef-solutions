#include <iostream>

using namespace std;

int main() 
{
  int t,n;
  cin>>t;
  while(t--)
  {int d,r=0;
    cin>>n;
   while(n!=0)
      {
        d=n%10;
        n/=10;
        r=r*10+d;
      }
    
    cout<<r<<endl;
  }
  return 0;
}

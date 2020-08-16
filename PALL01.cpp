#include <iostream>

using namespace std;

int main() 
{
    int t;
    cin>>t;
    while(t--)
    { int n,a,c=0,n1;
    cin>>n;
    n1=n;
    while(n>0)
    {
    a=n%10;
    n/=10;
    c=c*10+a;
    }
    if(c==n1)
      {
        cout<<"wins"<<endl;
      }
      else
      {
        cout<<"losses"<<endl;
      }
    }
    return 0;
}
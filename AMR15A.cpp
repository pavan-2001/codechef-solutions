#include <iostream>

using namespace std;

int main() 
{
    int n,a,counteven=0,countodd=0;
    cin>>n;
    while(n--)
    {
      cin>>a;
      if(a%2==0)
      {
        counteven++;
      }
      else
      {
        countodd++;
      }
    }
    if(counteven>countodd)
    {
      cout<<"READY FOR BATTLE"<<endl;
    }
    else
    {
      cout<<"NOT READY "<<endl;
    }
    return 0;
}
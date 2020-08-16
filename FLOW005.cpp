#include <iostream>
using namespace std;

int main() 
{
  int t;
  cin>>t;
  while(t--)
  {
   int r[6]={100,50,10,5,2,1};
  int a,b=0;
  cin>>a;
  for(int i=0;i<6;i++)
  {
    if(a>=r[i])
    {
      b=b+a/r[i];
      a%=r[i];
    }
  }
  cout<<b<<endl;
  }
  
  return 0;
}
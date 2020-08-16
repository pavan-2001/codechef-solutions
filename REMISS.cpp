#include <iostream>

using namespace std;

int main() 
{
  int t;
  cin>>t;
  while(t--)
  {
  int a,b;
  cin>>a>>b;
  int c=a>b?a:b;
  a+=b;
  cout<<c<<" "<<a<<endl;

  }
  
  return 0;
}
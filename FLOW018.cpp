#include <iostream>

using namespace std;

int main() 
{
  int t;
  cin>>t;
  while(t--)
  {
  int n,fact=1;
  cin>>n;
  while(n>0)
  {
    fact*=n;
    n--;
  }
  cout<<fact<<endl;
  }
  
  return 0;
}
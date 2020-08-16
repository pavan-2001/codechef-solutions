
#include <iostream>

using namespace std;

int main()
{
  int n,k,a,count=0;
  cin>>n>>k;
  while(n--)
  {
    cin>>a;
    if(a%k==0)
    {
      count+=1;
    }
     
  }
  cout<<count;
  return 0;
}
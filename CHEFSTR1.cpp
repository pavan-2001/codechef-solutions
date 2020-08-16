#include<iostream>
using namespace std;
void answer(long int arr[],long int n)
{
  long int value=0,ans=0;
  for(long int i=0;i<n-1;i++)
  {
    value=((arr[i+1]-arr[i]));
    if(value<0)
    ans+=-(value)-1;
    else
    ans+=value-1;
  }
  cout<<ans<<endl;
}
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    long int n;
    cin>>n;
    long int arr[n];
    for(int i=0;i<n;i++)
    {
      cin>>arr[i];
    }
    answer(arr,n);
  }
}
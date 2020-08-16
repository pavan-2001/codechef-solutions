#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int n;
    cin>>n;
    int a[n];
    long int profit=0;
    for(int i=0;i<n;i++)
    {
      cin>>a[i];
    }
    sort(a,a+n);
    int i=n-1,j=0;
    while(i>=0)
    { 
      a[i]=a[i]-j;
      if(a[i]>=0)
      {
        profit+=a[i];
      }
      j++;
      i--;

    }
    int k=1;
  profit=(profit*k)%1000000007;
  cout<<profit<<endl;
  profit=0;
  }
  return 0;
}
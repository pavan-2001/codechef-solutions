#include<iostream>
using namespace std;
int main()
{
  int t;
  bool print=true;
  cin>>t;
  while(t--)
  {
    int n;
    cin>>n;
    int a[n];
       for(int i=0;i<n;i++)
    {
      cin>>a[i];
    }
    int i=0;
    while(i<n)
    { 
      if(a[i]==1)
      {
        int j=i+1;
        while(j<=(i+5))
        {
          if(a[j]==1)
        {
          print=false;
          j++;
        }
        else 
        {
          j++;
        }
        }
        i++;
    }
    else
    {
      i++;
    }
    }
    if(print==true)
    cout<<"YES\n";
    else
    cout<<"NO\n";
print=true;
  }
  return 0;
}
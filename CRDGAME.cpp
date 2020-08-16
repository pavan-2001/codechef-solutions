#include<iostream>
using namespace std;
void answer(long int n,long int arr[][2])
{
  long int chef=0,morty=0;
  int c=0,m=0;
  for(long int i=0;i<n;i++)
  {
    long int a=arr[i][0],b=arr[i][1];
    while(a!=0)
    {
  
        chef+=a%10;
        a/=10;
    }
    while(b!=0)
    {
      morty+=b%10;
      b/=10;
    }
    if(chef>morty)
    c++;
    else if(chef<morty)
    m++;
    else 
    { c++;
      m++;
    }
    chef=0,morty=0;
  }
  if(c>m)
  cout<<0<<' '<<c<<endl;
  if(c<m)
  cout<<1<<' '<<m<<endl;
  if(c==m)
  cout<<2<<' '<<c<<endl;
}
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    long int n;
    cin>>n;
    long int arr[n][2];
    for(int i=0;i<n;i++)
    {
      cin>>arr[i][0]>>arr[i][1];
    }
    answer(n,arr);
  }
}
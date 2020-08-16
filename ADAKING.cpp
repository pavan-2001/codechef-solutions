#include<iostream>
#include<vector>
using namespace std;
void answer(long int n)
{
  vector<char> v(64,'.');
  v[0]='O';
  for(int i=n;i<64;i++)
  {
    v[i]='X';
  }
  int count=0;
  for(int i=0;i<64;i++)
  {
    cout<<v[i];
    count++;
    if(count==8)
    {
     cout<<"\n";
     count=0;
    }
  }
  cout<<endl;
}
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    long int n;
    cin>>n;
    answer(n);
  }
  
}
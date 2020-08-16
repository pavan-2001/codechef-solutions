#include <iostream>

using namespace std;

int main() 
{
    int t;
    cin>>t;
    while(t--)
    { int n,c=0,b,count=0;
      cin>>n;
      int a[12]={1,2,4,8,16,32,64,128,256,512,1024,2048};
      for(int i=11;i>=0;i--)
      {
        if(n>=a[i])
        {
          c=n/a[i];
          n%=a[i];
          count+=c;
          
        }
      }
      cout<<count<<endl;
    
    }
    return 0;
}
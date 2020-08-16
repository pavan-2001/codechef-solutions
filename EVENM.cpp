#include<vector>
#include<iostream>
#include<algorithm>
using namespace std;
void rev(vector<long int> &w,long int a)
{
    bool a1=true;
    long int i=0;
    while(a1==true)
    {   
        auto prev=find(w.begin(),w.end(),((a*i)+a)+1);
        auto end=find(w.begin(),w.end(),(a*(i+1)+a));
        reverse(prev,end+1);
        i+=2;
        if(end==w.end()-1)
        {
            a1=false;
        }
    }
    
}
void res(long int a1)
{
    vector<long int> v;

    for(long int i=1;i<=a1*a1;i++)
    {
        v.push_back(i);
    }
    if(a1%2==0)
    rev(v,a1);
    long int count=0;
    for(auto a:v)
    {
        cout<<a<<" ";
        count++;
        if(count%a1==0)
        {
            cout<<endl;
        }

    }
}

int main()
{   int t;
    cin>>t;
    while(t--)
    {
       int a;
      cin>>a;
       res(a);
    }
}
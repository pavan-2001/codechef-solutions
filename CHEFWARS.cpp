#include<bits/stdc++.h>
using namespace std;
#define FAST ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
void solve()
{
    ll h,p;
    cin>>h>>p;
    bool a=true;
    while(a)
    {
        h-=p;
        if(h<=0)
        {
            cout<<1<<endl;
            a=false;
        }
        else
        {
            p/=2;
            if(p<=0)
            {
                cout<<0<<endl;
                a=false;
            }
        }
    }
}
int main()
{
    FAST 
    ll t;
    cin>>t;
    while(t--)
    {
        solve();
    }
}
#include<bits/stdc++.h>
using namespace std;
#define ll unsigned long long int 
#define mp map<ll,ll>
#define loop for(ll i=0;i<n;i++)
void solve()
{
    ll n;
    cin>>n;
    mp m;
    loop
    {
        ll a;
        cin>>a;
        ++m[a];
    }
    ll max1=0;
    auto it=m.begin();
    while(it!=m.end())
    {
        max1=max(it->second,max1);
        it++;
    }
    cout<<max1<<endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    ll t;
    cin>>t;
    while(t--)
    solve();
}
#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define FAST ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
void solve()
{
    ll n,k;
    cin>>n>>k;
    vector<ll> v;
    for(ll i=0;i<n;i++)
    {
        ll a;
        cin>>a;
        if(a%k==0)
        v.push_back(1);
        else
        v.push_back(0);
    }
    for(auto a:v)
    cout<<a;
    cout<<endl;
}
int main()
{   FAST
    ll t;
    cin>>t;
    while(t--)
    solve();
}
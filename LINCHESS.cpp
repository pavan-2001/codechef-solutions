#include<bits/stdc++.h>
using namespace std;
#define FAST ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long 
void solve()
{
    ll n,k,ans=-1;
    cin>>n>>k;
    while(n--)
    {
        ll a;
        cin>>a;
        if(a<k&&k%a==0)
        ans=max(ans,a);
    }
    cout<<ans<<endl;
}
int main()
{
    FAST 
    ll t;
    cin>>t;
    while(t--)
    solve();
}
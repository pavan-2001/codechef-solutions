#include<bits/stdc++.h>
using namespace std;
#define FAST ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
void solve()
{
    ll pc,pr;
    cin>>pc>>pr;
    if(pc<10&&pr<10)
    cout<<1<<' '<<1<<endl;
    else if(pc<10&&pr>=10)
    cout<<0<<' '<<1<<endl;
    else if(pr<10&&pc>=10)
    cout<<1<<' '<<1<<endl;
    else
    {
        ll dc=0,dr=0;
        if(pc%9!=0)
        dc=(pc/9)+1;
        else
        dc=pc/9;
        if(pr%9!=0)
        dr=(pr/9)+1;
        else
        dr=pr/9;
        if(dc==dr)
        cout<<1<<' '<<dr<<endl;
        else if(dc>dr)
        cout<<1<<' '<<dr<<endl;
        else
        cout<<0<<' '<<dc<<endl;
    }
}
int main()
{
    FAST 
    ll t;
    cin>>t;
    while(t--)
    solve();
}
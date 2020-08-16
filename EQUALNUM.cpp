#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define FAST ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
void solve()
{
    string w,I;
    cin>>w>>I;
    vector<char> s1,s2;
    for(ll i=0;i<w.size();i++)
    {
        if(w[i]!=',')
        s1.push_back(w[i]);
    }
    for(ll i=0;i<I.size();i++)
    {
        if(I[i]!=',')
        s2.push_back(I[i]);
    }
    if(s1==s2)
    {
        cout<<"equal"<<endl;
        return ;
    }
    else
    {
        cout<<"different"<<endl;
        return ;
    }
    
}
int main()
{
    ll t;
    cin>>t;
    while(t--)
    solve();
}
#include<bits/stdc++.h>
using namespace std;
#define FAST ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
void solve()
{
    string s,p;
    cin>>s>>p;
    map<char,ll> m;
    for(ll i=0;i<s.size();i++)
    {
        ++m[s[i]];
    }
    for(ll i=0;i<p.size();i++)
    --m[p[i]];
    auto it=m.begin();
    while(it->first<p[0])
    {
        for(ll i=0;i<it->second;i++)
        cout<<it->first;
        it++;
    }
    if(it->first>p[0])
    {
        cout<<p;
        while(it!=m.end())
        {
            for(ll i=0;i<it->second;i++)
            cout<<it->first;
            it++;
        }
        cout<<endl;
        return ;
    }
    else
    {
        ll k=1;
        while(p[0]==p[k])
            k++;
        if(it->first<p[k])
        {
            for(ll i=0;i<it->second;i++)
            cout<<it->first;
            ++it;
            cout<<p;
            while(it!=m.end())
            {
                for(ll i=0;i<it->second;i++)
                cout<<it->first;
                it++;
            }
            cout<<endl;
            return ;
        }
        else
        {
            cout<<p;
            while(it!=m.end())
            {
                for(ll i=0;i<it->second;i++)
                cout<<it->first;
                it++;
            }
            cout<<endl;
            return ;
        }
    }
    /*ll j=0;
    while(s[j]<p[0])
        j++;
    if(s[j]==p[0])
    {
        ll i=j+1;
        while(s[j]==s[i])
        i++;
        ll i1=1;
        while(p[0]==p[i1])
        i1++;
        if(s[j]<p[i1])
        {
            string ans=s.substr(0,i),ans2=s.substr(i,s.size());
            cout<<ans<<p<<ans2<<endl;
                return ;
        }
        else
        {
            ll m=0;
            string ans=s.substr(j,s.size());
            while(m<j)
            {
                cout<<s[m];
                m++;
            }
            cout<<p<<ans<<endl;
        
            return ;
        }
    }
    else
    {
        string ans1=s.substr(j,s.size()),ans=s.substr(0,j);
        cout<<ans<<p<<ans1<<endl;
        return ;
    }*/
    
}
int main()
{
    FAST 
    ll t;
    cin>>t;
    while(t--)
    solve();
}
#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    map<char,int> m;
    for(int i=0;i<n;i++)
    {
        char a;
        cin>>a;
        ++m[a];
    }
    auto it=m.begin();
    while(it!=m.end())
    {
        if(it->second%2!=0)
        {
            cout<<"NO"<<endl;
            return ;
        }
        it++;
    }
    cout<<"YES"<<endl;
    return ;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--)
    solve();
}
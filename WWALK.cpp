#include<vector>
#include<iostream>
using namespace std;
void weird_distance(auto b,auto e,auto b1,auto e1)
{
    vector<long int> v;
    vector<long int> v1;
    v.insert(v.begin(),b,e);
    v1.insert(v1.begin(),b1,e1);
    long int w_d=0;
    long int alice_d=0,bob_d=0;
    for(long int i=0;i<v.size();i++)
    { 
        alice_d+=v[i];
        bob_d+=v1[i];
        if(alice_d==bob_d)
        {
            if(v[i]==v1[i])
            {
                w_d+=v[i];
            }
        }
    }
    cout<<w_d<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long int n;
        cin>>n;
        vector<long int> v,v1;
        long int a,a1;
    for(long int i=0;i<n;i++)
    {
        cin>>a;
        v.push_back(a);
    }
    for(long int i=0;i<n;i++)
    {
        cin>>a1;
        v1.push_back(a1);
    }
    weird_distance(v.begin(),v.end(),v1.begin(),v1.end());
    }
}
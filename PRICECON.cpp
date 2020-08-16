#include<vector>
#include<iostream>
using namespace std;
void revenue(vector<int> &w, int k)
{   int rev=0;
    for(auto a:w)
    {
       if(a>k)
        rev+=a-k;
    }
    cout<<rev<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        vector<int> v;
        int a;
        while(n--)
        {
            cin>>a;
            v.push_back(a);
        }
        revenue(v,k);
    }
}
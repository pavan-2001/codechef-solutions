#include<vector>
#include<iostream>
using namespace std;
void work(auto b,auto e,long int p)
{
    vector<long int> v;
    v.insert(v.begin(),b,e);
    long int work=0;
    for(auto &a:v)
    {
        work+=a*p;
    }
    if(work<=120)
    {
        cout<<"No"<<endl;
    }
    else
    {
        cout<<"Yes"<<endl;
    }
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        vector<long int> v;
        long int number;
        int n=5;
        while(n--)
        {
            cin>>number;
            v.push_back(number);
        }
        long int p;
        cin>>p;
        work(v.begin(),v.end(),p);
    }
}
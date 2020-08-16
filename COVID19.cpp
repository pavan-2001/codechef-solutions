#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void min_max(long int ,long int []);
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long int n;
        cin>>n;
         long int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        min_max(n,arr);
    }
    
    return 0;
}
void min_max(long int n,long arr[])
{
    long int count;
    count=1;
    vector<int> v;
    long int j=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i+1]-arr[i]<=2)
        {
            count++;
        }
        else
        {
            v.push_back(count);
            count=1;
        }
    }
    sort(v.begin(),v.end());
    cout<<*v.begin()<<' '<<*(v.end()-1)<<endl;
    
}
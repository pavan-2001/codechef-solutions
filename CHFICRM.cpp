#include<map>
#include<iostream>
using namespace std;

void serve(int arr1[] ,int n)
{
    map<const int,unsigned int> m={{5,0},{10,0},{15,0}};
    bool a=true;
    int i1=0;
    while(a==true&&i1<n)
    {   
        if(arr1[i1]==5)
        {
            ++m[arr1[i1]];
        }
        else
        {
           int i=arr1[i1]-5;
            bool b=true;
            while(i>=5&&b==true)
            {
                if(((arr1[i1]-5)/i)<=m[i])
                {
                    m[i]-=((arr1[i1]-5)/i);
                     ++m[arr1[i1]];
                     b=false;
                }
                else
                {
                    i=i-5;
                }
                if(i<5)
                {
                    a=false;
                }
            }
        
        }
    
       i1++;
    }
    cout<<(a==true?"YES":"NO")<<endl;

}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        serve(arr,n);
    }
}
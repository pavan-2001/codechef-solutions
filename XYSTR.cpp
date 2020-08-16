#include<string>
#include<iostream>
#include<string.h>
using namespace std;
void pairs(string s)
{
    long int count=0;
        long int i=0;
        while(i<s.size()-1)
        {
            if(s[i]!=s[i+1])
            {
                count++;
                i+=2;
            }
            else
            {
                i++;
            }
        }
        cout<<count<<endl;
    count=0;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        pairs(s);
    }
}
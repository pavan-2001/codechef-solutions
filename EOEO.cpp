#include<iostream>
using namespace std;
long int count_even(long int u)
{   long int count_e=0;
    count_e=(u-1)/2;
    return count_e;
}
void jerry_wins(long int ts)
{
    if(ts%2==0)
    {
        jerry_wins(ts/2);
    }
    else
    {
        cout<<count_even(ts)<<endl;
    }
}
int main()
{   long int t;
    cin>>t;
    while(t--)
    {
     long int ts;
    cin>>ts;
     jerry_wins(ts);
    }
}
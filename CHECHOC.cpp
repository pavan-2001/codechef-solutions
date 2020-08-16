#include<bits/stdc++.h>
using namespace std;

int main(){
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--)
    {
        int n,m,x,y;
        cin>>n>>m>>x>>y;
        if(n==1 && m==1){
            cout<<x<<endl;
            continue;
        }                        
        if(2*x<=y){
            cout<<(n*m*x)<<endl;
        }
        else{
            if(n%2==0 || m%2==0){
                cout<<(((n*m)/2)*y)<<endl;
            }
            else{
                if(x>=y){
                    cout<<(((n*m+1)/2)*y)<<endl;
                }
                else{
                    cout<<(max(x,(y-x))+(((n*m-1)/2)*y))<<endl;
                }
            }
        }
    }
}
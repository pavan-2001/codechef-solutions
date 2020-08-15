
#include<iostream>
#include<string>
using namespace std;
int main(){
	int t,n,m,s;
	cin>>t;
	while(t--)
  {
		cin>>n;
		 s=0;
		for(int i=0;i<n;i++){
			cin>>m;
			if(m>s)
			s=m;
		}
		cout<<s<<endl;
        }
	return 0;

}

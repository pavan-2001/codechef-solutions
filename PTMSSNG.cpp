#include<iostream>
#include<unordered_map>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long int n;
		cin>>n;
		long int a=0,b=0;
	    unordered_map<long int,long int> m1;
		unordered_map<long int,long int> m2;
		for(long int i=1;i<(4*n);i++)
		{
			cin>>a>>b;
			++m1[a];
			if(m1[a]%2==0)
			{
			    auto m=m1.find(a);
			    m1.erase(m);
			}
			++m2[b];
			if(m2[b]%2==0)
			{
			    auto m=m2.find(b);
			    m2.erase(m);
			}

		}
		auto p1=m1.begin(),p2=m2.begin();
		cout<<p1->first<<' '<<p2->first<<endl;
	}
}
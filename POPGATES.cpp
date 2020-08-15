#include<bits/stdc++.h>

using namespace std;

int main(){
	int i, t, n,k,j;
	char a[1000];
	cin>>t;
	while(t--){
		cin>>n>>k;
		for(i=0;i<n;i++)
			cin>>a[i];
		int high=n;
		while(k--){
			if(a[high-1]=='H'){
				for(j=0;j<high-1;j++){
					if(a[j]=='H')
						a[j]='T';
					else
						a[j]='H';
				}
				
			}
			high--;
			
		}
		int count=0;
		for(i=0;i<high;i++){
			if(a[i]=='H')
				count++;
		}
		cout<<count<<endl;
		
	}
}
#include<bits/stdc++.h>
#define SIZE 26

using namespace std;

void queries(string,int,unsigned long int []);

int main(){
    int T;
    cin>>T;
    while(T--){
        int N,Q;
        cin>>N>>Q;
        string str;
        cin>>str;
        unsigned long int Qs[Q];
        for(int i=0;i<Q;i++)
            cin>>Qs[i];
        queries(str,Q,Qs);
    }
    return 0;
}

void queries(string str,int Q,unsigned long int Qs[]){
    int N=str.size();
    int F[SIZE] = {0};
    for(int i=0;i<N;i++)
        F[str[i]-'a']++;
    long int output;
    for(int i=0;i<Q;i++){
        output=0;
        if(Qs[i] == 0)
            output = N;
        else
            for(int j=0 ; j<SIZE ; j++)
                if(F[j] != 0 && F[j] >= Qs[i])
                    output += F[j]-Qs[i];
        cout<<output<<endl;
    }
}
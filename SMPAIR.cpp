#include <iostream>
#include<algorithm>
using namespace std;
int main() 
{
 int a;
 cin>>a;
 while(a--)
 {
    int b;
    cin>>b;
    int ab[b];
    for(int i=0;i<b;i++)
    {
      cin>>ab[i];
    }
    sort(ab,ab+b);
    int c=ab[0]+ab[1];
    cout<<c<<endl;


 }
 return 0;
}
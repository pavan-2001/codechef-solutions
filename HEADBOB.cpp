#include <iostream>
#include<iomanip>
using namespace std;
int main() 
{
 int a;
 cin>>a;
 while(a--)
 {   int b,countI=0,countY=0;
  cin>>b;
  char gesture[b];
  for(int i=0;i<b;i++)
  {
    cin>>gesture[i];
  }
  for(int i=0;i<b;i++)
  {
    if(gesture[i]=='I')
    {
      countI++;
    }
    if(gesture[i]=='Y')
    {
      countY++;
    }
  }
  if(countI!=0)
  {
    cout<<"INDIAN"<<endl;
  }
  if(countY!=0&&countI==0)
  {
    cout<<"NOT INDIAN"<<endl;
  }
  if(countY==0&&countI==0)
  {
    cout<<"NOT SURE"<<endl;
  }
 }
 return 0;
}
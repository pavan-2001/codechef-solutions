#include <iostream>

using namespace std;

int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    char a;
    cin>>a;
    if(a=='B'||a=='b')
    {
      cout<<"BattleShip"<<endl;
    }
    if(a=='C'||a=='c')
    {
      cout<<"Cruiser"<<endl;
    }
    if(a=='D'||a=='d')
    {
      cout<<"Destroyer"<<endl;
    }
    if(a=='F'||a=='f')
    {
      cout<<"Frigate"<<endl;
    }
  }
  return 0;
}
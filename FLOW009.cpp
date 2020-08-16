#include <iostream>
#include<iomanip>
using namespace std;
int main() 
{
 int t;
 cin>>t;
 while(t--)
 {
   double expenses,quantity,price;
   cin>>quantity>>price;
   if(0<quantity&&quantity<=1000)
   {
     expenses=quantity*price;
   }
   if(1000<quantity&&quantity<=100000)
   {
     expenses=((quantity*price)-((price*0.1)*quantity));
   }
   cout<<fixed<<setprecision(6)<<expenses<<endl;
   
 }
 return 0;
}
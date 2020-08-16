#include <iostream>
#include<iomanip>
using namespace std;
int main() 
{
 int a;
 cin>>a;
 while(a--)
 {   int salary;
 double gross_salary;
 cin>>salary;
 if(salary<1500)
 {
   gross_salary=salary+(salary*0.1)+(salary*0.90);
 }
 else
 {
   gross_salary=salary+(500)+(salary*0.98);
 }
 cout<<fixed<<setprecision(2)<<gross_salary<<endl;
 }
 return 0;
}
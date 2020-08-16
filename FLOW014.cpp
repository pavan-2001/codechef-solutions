#include <iostream>

using namespace std;
int main() 
{
 int a;
 cin>>a;
 while(a--)
 {   
   int hardness,tensile_strength;
   float carbon_content;
   cin>>hardness>>carbon_content>>tensile_strength;
   if(hardness>50&&carbon_content<0.7&&tensile_strength>5600)
   {
     cout<<10<<endl;
   }
   else if(hardness>50&&carbon_content<0.7)
   {
     cout<<9<<endl;
   }
    else if(carbon_content<0.7&&tensile_strength>5600)
   {
     cout<<8<<endl;
   }
    else if(hardness>50&&tensile_strength>5600)
   {
     cout<<7<<endl;
   }
    else if(hardness>50||carbon_content<0.7||tensile_strength>5600)
   {
     cout<<6<<endl;
   }
   else
   {
     cout<<5<<endl;
   }
 }
 return 0;
}
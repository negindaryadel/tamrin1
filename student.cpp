#include <iostream>

using namespace std;

int main()
{
   string name,family;
   float grade,a,b,c,average=0;
   cout<<"enter name and family"<<endl;
   cin>>name;
   cin>>family;
   cout<<"enter 3 grade"<<endl;
   cin>>a;
   cin>>b;
   cin>>c;
   average=(a+b+c)/3;

   if(average>=17)
   {
       cout<<name<<family<<" : ";
       cout<<"great";
   }

  else if(average<17 && average>=12 )
   {
       cout<<name<<family<<" : ";
       cout<<"normal";
   }
 else if( average<12)
   {
       cout<<name<<family<<" : ";
       cout<<"Faill";
   }

   return 0;
}

#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>
using namespace std;
#include <cmath>
int main()
{
float a,b,result=0;
string op;
int fac=1;

cout<<"enter number1 : ";
cin>>a;
cout<<"enter op : *,cos,tan,cot,rad,fac = " ;
cin>>op;
if (op == "*")
{
    cout<<"enter naumber2 : ";
    cin>>b;
    result=(a*b);
    cout<<"result= "<<result;
}
else if(op=="rad")
{
    cout<<"result : "<<sqrt(a);
}
else if(op=="fac")
{
    for(int i=1; i<=a; i++)
        fac=fac*i;

cout<<"result : "<<fac;
}
else if(op=="cos")
{
 a=a*3.14/180;
 cout<<"result : "<<cos(a);
}
else if(op=="tan")
{
a=a*3.14/180;
cout<<"result : "<<tan(a);
}
else if(op=="cot")
{
a=a*3.14/180;
cout<<"result : "<<1/tan(a);
}
else {
        cout << "unknown function";

}



return 0;




}

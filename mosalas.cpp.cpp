#include <iostream>

using namespace std;

int main()
{
    int a,b,c,result=0;
    cout<<" enter a,b,c : "<<endl;
    cin>>a>>b>>c;

     if(a<c+b&&b<a+c&&c<a+b)
    {
        cout<<"yes";
    }

    else
        cout<<"no";
    return 0;
}

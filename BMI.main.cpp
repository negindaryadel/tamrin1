#include <iostream>

using namespace std;

int main()
{
    float height,weight,bmi;
    cout<<"enter height and weight : "<<endl;
	cin >> height;
	cin>> weight;
    bmi=weight /(height*height);
    if(bmi<18.5)
    {
        cout<<"underweight";
    }

       else if(bmi>=18.5 && bmi<24.9)
       {
           cout<<"normal"<<endl;
       }

           else if(bmi>25 && bmi<29.9)
           {
                cout<<"overweight";
           }

          else if(bmi>30 && bmi<34.9)
              {
                    cout<<"obese";
              }
            else if (bmi>=34.9)
                cout<<"extermely obese";
    return 0;
}






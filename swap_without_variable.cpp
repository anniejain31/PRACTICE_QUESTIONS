//SWAPPING WITHOUT THIRD VARIABLE
#include <iostream>
using namespace std;

int main()
{
    int num1, num2;
    cout<<"Enter Num 1:"<<endl;
    cin>>num1;
    cout<<"Enter Num 2:"<<endl;
    cin>>num2;
    num1=num1+num2;
    num2=num1-num2;
    num1=num1-num2;
    cout<<"Number 1: "<<num1<<endl;
    cout<<"Number 2: "<<num2<<endl;

    return 0;
}

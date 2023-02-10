#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter the number\n";
    cin>>num;
    
    if(num>0)
    {
        cout<<"Positive no."<<endl;
    }
    else if(num==0){
        cout<<"Neither positiver nor negative"<<endl;
    }
    else{
        cout<<"Negative no."<<endl;
    }
    return 0;
}
#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter Number:"<<endl;
    cin>>num;
    cout<<num<<endl;
    for(int i=1;i<=10;i++){
        int mul= num*i;
        cout<<num<<"X"<<i<<"="<<mul<<endl;
    }
return 0;
}
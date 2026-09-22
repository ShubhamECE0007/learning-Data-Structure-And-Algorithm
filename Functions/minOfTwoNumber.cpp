#include<iostream>
using namespace std;
void minOfTwoNumber(int a , int b){
    if(a==1)
    {
        cout<<"Both numbers are equal"<<endl;
    }
    if(a<b){
      cout<<a<<" is the minimum number between two numbers"<<endl;
    }  
    else{
      cout<<b<<" is the minimum number between two numbers"<<endl;
    }
}

int main(){
    int a,b;
    cout<<"enter the value of first integer: ";
    cin>>a;
    cout<<"enter the value of second integer: ";
    cin>>b;
    minOfTwoNumber(a,b);
    return 0;
}
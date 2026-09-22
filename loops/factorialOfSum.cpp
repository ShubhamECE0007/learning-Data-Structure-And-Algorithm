#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    long long fact = 1 ;

    for(int i = 1;i<n+1;i++)
    {
        fact = fact*i;
    }

    cout<<"The factorial of the number is: "<<fact<<endl;
};
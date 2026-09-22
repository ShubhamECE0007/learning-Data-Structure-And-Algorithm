#include<iostream>
using namespace std;
int main(){
    int n;
    
    cout<<"The given number is: ";
    cin>>n;
    int count = 0;
    if(n==0)
    count++;
    while(n!=0)
    {
       
        n=n/10;
        count++;
    }
       cout<<"The number of digits in the given number is: "<<count<<endl;
}
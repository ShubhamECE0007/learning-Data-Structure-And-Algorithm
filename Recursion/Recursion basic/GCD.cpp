#include<iostream>
using namespace std;
   int hcf(int a,int b){
    if(a==0) return b;
        return hcf(b%a,a);
    }

int main(){
 
    int a,b;
    cout<<"Enter two number"<<endl;
    int a =12;
    cout<<hcf(a,b);
}
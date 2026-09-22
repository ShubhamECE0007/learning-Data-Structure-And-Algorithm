#include<iostream>
#include<string>
using namespace std;
int main(){
    string x = "King Harry";
    for(int i=0;i<x.length();i++){
        if(i%2==0){
            x[i] = 'a';
        }
    }
    cout<<x<<endl;
    return 0;
}
#include<iostream>
#include<string>
using namespace std;
int main(){
    string x = "letter";
    int n = x.length();
   int i =0;
   int j=n/2-1;
   while(i<=j){
    int temp = x[i];
    x[i] = x[j];
    x[j] = temp;
    i++;
    j--;
   
   }
    cout<<x<<endl;
    return 0;
    }
   

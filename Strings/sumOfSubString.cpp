#include<iostream>
#include<string>
using namespace std;
int sumOfSubString(string s){
    int n = s.length();
    int sum = 0;
    for(int i =0;i<=n;i++){
        for(int j =1;j<=n-i;j++){
            sum+=stoi(s.substr(i,j));
        }
    }
   return sum;
}
int main(){
string s = "12345";
cout<<sumOfSubString(s)<<endl;
}
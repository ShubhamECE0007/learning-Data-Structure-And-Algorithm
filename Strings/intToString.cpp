#include<iostream>
#include<string>
using namespace std;
int main(){
    int n = 1982;
    string s;
    while(n!=0){
        int LastDigit = n%10;
        char ch = LastDigit + 48;
        s.push_back(ch);
        n = n/10;  
    }
int i = 0;
    int j = s.length()-1;
while(i<j){
    int temp = s[i];
    s[i] = s[j];
    s[j] = temp;
    i++;
    j--;
}

cout<<s<<endl;
}

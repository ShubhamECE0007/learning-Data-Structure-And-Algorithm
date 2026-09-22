#include<iostream>
#include<string>
using namespace std;
int main(){
    string x;
    int n = x.length();
    getline(cin,x);
    int countOfVowels = 0;
    for(char ch: x){
        if(ch == 'a' || ch=='e' || ch == 'i' || ch=='o' || ch =='u') countOfVowels++;
    }
    cout<<"Count of vowels in the string is: "<<countOfVowels<<endl;
    return 0;
}
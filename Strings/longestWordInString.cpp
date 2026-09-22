#include<iostream>
#include<string>
#include<vector>
using namespace  std;

int main(){
    string s = "shubham is the smartest guy";
    int n = s.length();
    int i =0,j=0,maxlen=0;

    while(j<n){
   
        if(s[j]!=' '){
            j++;
        }
        else{
            int len = j-i;
            if(len>maxlen) maxlen = len;
            i=j;
            while(s[i]==' ' && i<n) 
            {
                i++;
                j++;

            }
            

        }

    }
    cout<<maxlen<<endl;

}
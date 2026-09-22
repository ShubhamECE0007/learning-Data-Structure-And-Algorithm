#include<iostream>
using namespace std;
int power(int a,int b){
    if(b==0) return 1;
    if(a==0) return 0;
    if(b%2==0) return power(a/2,b/2)*power(a/2,b/2);
    else{
        return power(a/2,b/2)*power(a/2,b/2)*a;
    }
}
int main(){
    int a,b;
    cin>>a>>b;
    cout<<power(a,b)<<endl;;

}
#include<iostream>
using namespace std;
int powerState(int a,int b)
{
    if(a==1) return 1;
    if(a==0) return 0;
    if(b==0) return 1;
int ans = a * powerState(a,b-1);
return ans;
}
int main(){
    cout<<powerState(2,3);
}
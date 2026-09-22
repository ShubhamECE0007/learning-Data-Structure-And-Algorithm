#include<iostream>
using namespace std;
void print(int n){
    if(n==0) return; 
    print(n-1);

}
int main(){
    print(12);

} 
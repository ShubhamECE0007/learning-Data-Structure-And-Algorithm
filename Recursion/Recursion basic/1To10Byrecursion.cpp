// #include<iostream>
// using namespace std;
// int n;
// void printNumber(int x){
// if(x>n) return;
// cout<<x<<" ";
// printNumber(x+1);
// }
// int main(){ 
//     cin>>n;
//     printNumber(1);
//     return 0;
// }

#include<iostream>
using namespace std;
int n;
void print(int n){
    if(n==0) return;
    print(n-1);
    cout<<n<<" ";
}

int main(){
    cin>>n;
    print(n);

}

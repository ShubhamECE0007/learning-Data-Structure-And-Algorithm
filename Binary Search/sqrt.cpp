#include<iostream>
using namespace std;
int sqrt(int x){
    long long n = x;
    long long  low =0;
    long long high = n;
    while(low<=high){
        long long mid = low+(high-low)/2;
        if(mid*mid<n) low = mid+1;
        else if(mid*mid>n) high = mid -1;
        else return mid;
    }
  return high;
}
int main(){
    cout<<sqrt(16)<<endl;
    cout<<sqrt(6)<<endl;
    return 0;
}
#include<iostream>
using namespace std;
int main(){
    int n=5;
    int arr[5]={64, 25, 12, 22, 11};
    for(int i=0;i<n;i++){
        int j=i;
        while(j>=1 && arr[j]<arr[j-1]) 
        {
            swap(arr[j],arr[j-1]);
            j--;

        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
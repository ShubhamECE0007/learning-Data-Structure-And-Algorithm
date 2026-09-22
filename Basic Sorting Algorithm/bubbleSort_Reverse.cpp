#include<iostream>
using namespace std;
void print(int arr[], int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int n = 5;
    int arr[5]={64, 25, 12, 22, 11};
    for(int i=n;i>0;i--){
        int max=i;minIDX=0;
      for(int j=n-1;j>i;j--){
        if(arr[j]>arr[max])
        arr[max]=arr[j];
        minIDX=j;

      }

      swap(arr[max],arr[minIDX]);
    }


    print(arr, 5);
}
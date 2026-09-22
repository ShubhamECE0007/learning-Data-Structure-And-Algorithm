#include<iostream>
using namespace std;
void findElement(int arr[],int n,int target){
    for(int i=0;i<n;i++)
    {
        if(arr[i]==target){
            cout<<"element is found at index: "<<i<<endl;
            break;
        }

       
    }
cout<<"element is not found in the array"<<endl;
}


int main(){
    int arr[]={2,3,5,6,7,9};
    int n=sizeof(arr)/sizeof(arr[0]);
    int target = 6;

    findElement(arr,n,target);

}
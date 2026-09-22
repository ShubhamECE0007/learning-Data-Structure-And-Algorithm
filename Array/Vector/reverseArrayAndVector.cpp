#include<iostream>
using namespace std;
int main()
{
    
    int arr[]={3,78,9,4,2,82};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"Original array: ";
    for(int i=0;i<n;i++)    
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    int start=0;
    int end=n-1;
    for(int i=0;i<n/2;i++)
    {
        int temp = arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;


    }
    cout<<"nReversed array: ";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}


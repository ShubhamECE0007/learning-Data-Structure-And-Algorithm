#include<iostream>
using namespace std;
int main()
{
    int arr[]={2,3,6,7,8,9};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout<<"address of second element is: "<<arr<<endl;

    cout<<"address of second element is: "<<&arr[1]<<endl;
    cout<<"address of third element is: "<<&arr[2]<<endl;
    cout<<"address of fifth element is: "<<&arr[4]<<endl;
    return 0;
}
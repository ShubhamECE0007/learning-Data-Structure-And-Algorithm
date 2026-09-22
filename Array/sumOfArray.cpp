#include<iostream>
using namespace std;
int main(){
    int arr[]={2,5,6,8,9,9};
    int Sum=0;

    for(int i=0;i<6;i++)
    {
        Sum = Sum + arr[i];
    }
    cout << "Sum of array elements is: " << Sum << endl; 
}
#include<iostream>
using namespace std;
int main()
{ 
int Multi=1;
    int n=3,a[]={7,8,9};
    for(int i=0;i<n;i++)
    {
       Multi = Multi*a[i];
    }
    cout<<"The product of the array is: "<<Multi;

    return 0;
}
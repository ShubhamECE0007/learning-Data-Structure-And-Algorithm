#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int arr[]={2,3,4,6,7,8,};
    int n = sizeof(arr)/sizeof(arr[0]);
    int max1 = INT_MIN;
 for(int i = 0;i<n;i++){
    if(arr[i]>max1){
        max1 = arr[i];
    }
}
int max2 = INT_MIN;
for(int i = 0;i<n;i++){
    if(arr[i]>max2 && arr[i]!=max1)
    {
        max2 = arr[i];
    }

 }

cout<<"first maximum element is: "<<max1<<endl;
cout<<"second maximum element is: "<<max2<<endl;

}
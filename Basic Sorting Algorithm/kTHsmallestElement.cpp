// #include<iostream>
// #include<vector>
// using namespace std;
// void insertionSort(vector<int>& arr, int n){
//     for(int i=0;i<n-1;i++){
//         int j=i;
//         while(j>=1 && arr[j]<arr[j-1])
//         {
//             swap(arr[j],arr[j-1]);;
//             j--

//         }
//     }
// }

// void print(const vector<int>& arr){
//     for(int i=0;i<arr.size();i++){
//         cout<<arr[i]<<" ";
//     }
// }
// int main(){
//     int n=5;
//     vector<int> arr={64, 25, 12, 22, 11};
//     insertionSort(arr,n);
//     int k;
//     cin>>k;
//     cout<<k<<"th smallest element is: "<<arr[k-1]<<endl;
//     print(arr);
//     return 0;
// }

#include<iostream>
#include<vector>
using namespace std;
void KthsmallestElement(vector<int>& arr,int n,int k)
{
    for(int i=0;i<n-1;i++)
    {
        int mn=arr[i],minIDX=i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<mn)
            {
                mn=arr[j];
                minIDX=j;
            }
        }
        swap(arr[i],arr[minIDX]);
    }
}

int main(){
    int n=5;
    vector<int> arr={64, 25, 12, 22, 11};
    int k=3;
    KthsmallestElement(arr,n,k);
    cout<<k<<"th smallest element is: "<<arr[k-1]<<endl;
    return 0;
}
// #include<iostream>
// #include<vector>
// using namespace std;
// int mergeSort(vector<int>& arr1,vector<int>& arr2){
//     vector<int>ans;
//     int i=0,j=0,k=0;
//     while(i<=arr1.size() || j<=arr2.size()){
//         if(arr1[i]>arr2[j]) {
//             ans.push_back(arr1[i]);
//             j++;
//             k++;
//         }

//         else if(arr1[i]<arr2[j]){
//             ans.push_back(arr2[j]);
//             i++;
//             k++;
//         }
// return ans;
//     }
    
// }
// int main(){
//     vector<int> arr1={2,3,6,8};
//     vector<int> arr2={1,4,5,7,9,10};
//     vector<int>ans;
//    cout<<mergeSort(arr1,arr2);


// }

// #include <iostream>
// #include <vector>
// using namespace std;

// vector<int> mergeSort(vector<int>& arr1, vector<int>& arr2) {

//     vector<int> ans;

//     int i = 0, j = 0;

//     while (i < arr1.size() && j < arr2.size()) {

//         if (arr1[i] < arr2[j]) {
//             ans.push_back(arr1[i]);
//             i++;
//         }
//         else {
//             ans.push_back(arr2[j]);
//             j++;
//         }
//     }

//     // Remaining elements of arr1
//     while (i < arr1.size()) {
//         ans.push_back(arr1[i]);
//         i++;
//     }

//     // Remaining elements of arr2
//     while (j < arr2.size()) {
//         ans.push_back(arr2[j]);
//         j++;
//     }

//     return ans;
// }

// int main() {

//     vector<int> arr1 = {2, 3, 6, 8};
//     vector<int> arr2 = {1, 4, 5, 7, 9, 10};

//     vector<int> ans = mergeSort(arr1, arr2);

//     for (int x : ans) {
//         cout << x << " ";
//     }

//     return 0;
// }

#include<iostream>
#include<vector>
using namespace std;
void print(vector<int>arr){
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
}
void merge(vector<int>&a,vector<int>&b,vector<int>&c){
    int i =0,j=0,k=0;
    while(i<a.size()&&j<b.size()){
        if(a[i]<b[j]){
            c[k]=a[i];
            i++;
            k++;
        }
        else{
            c[k]=b[j];
            j++;
            k++;
        }

        while(i<a.size()){
            c[k]=a[i];
            i++;
            k++;
        }
        while(j<b.size()){
            c[k]=b[j];
            j++;
            k++;    
        }
    }

}
 int main(){
vector<int>a={2,3,6,8};
vector<int>b={1,4,5,7,9,10};
vector<int>c(a.size()+b.size());
merge(a,b,c);
print(c);
 }
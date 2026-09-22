#include<iostream>
#include<vector>
using namespace std;
 int main()
 {
   vector<int> arr(5,11);
   for(int i=0;i<arr.size();i++){
     cout<<arr[i]<<" "; 
   }
   cout<<endl;

   
    arr.push_back(12);
   for(int i=0;i<arr.size();i++){
     cout<<arr[i]<<" ";
   }
 }
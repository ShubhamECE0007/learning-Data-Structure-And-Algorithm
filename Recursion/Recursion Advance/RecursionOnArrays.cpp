#include<iostream>
#include<vector>
using namespace std;
void printRec(vector<int>& arr,int idx){
   if(arr.size()==idx) return;
    cout<<arr[idx]<<" ";
  printRec(arr,idx+1);
}
int main(){
 vector<int>arr={5,6,8,111,758,-90};
 printRec(arr,0);

}
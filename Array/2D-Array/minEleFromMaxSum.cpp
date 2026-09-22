#include<iostream>
#include<climits>
using namespace std;
int main(){
int arr[4][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
int int_Ele=INT_MAX;
for(int i=0;i<4;i++)
{ 
    int max_ele=INT_MIN;
    for(int j=0;j<4;j++)
    {
        if(arr[i][j]>max_ele)
        {
            max_ele=arr[i][j];
        }

        
    if(max_ele>int_Ele){
        int_Ele=max_ele;
    }
        
    }
    
}
cout<<"Minimum element from the maximum elements of each row is: "<<int_Ele<<endl;


}
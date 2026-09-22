// Print Alphabets in Each Line"lowercase"

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    for(int i= 1;i<=n;i++){
        for(int j = 1;j<=n;j++)
        {
            cout<<(char)(j+96)<<" ";
        }
        cout<<endl;
    }
}

    // Print Alphabets in Each Line"Uppercase"

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the value of n: ";
//     cin>>n;
//     for(int i = 1;i<=n;i++){
//         for(int j = 1; j<=n;j++)
//         {
//             cout<<(char)(j+64)<<" ";
//         }
//         cout<<endl;
//     }
// }
#include<iostream>
using namespace std;
int main() {
    int n ;
    cin>>n;
    for(int i = 2;i<n;i++)
    {
        if(n%i==0 && n!=i)
        {
            cout<<n<<" is not a prime number"<<endl;
            return 0;
        }

    }

    cout<<n<<" is a prime number"<<endl;
    return 0;
}
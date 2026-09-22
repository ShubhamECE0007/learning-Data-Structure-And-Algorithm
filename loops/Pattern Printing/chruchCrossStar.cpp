#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of rows: ";
    cin>>n;
    if(n%2==1)
    {
        for(int i = 1;i<=n;i++)
        {
            for(int j = 1;j<=n;j++)
            {
                if(i==(n/2)+1 || j==(n/2)+1)
                {
                    cout<<"* ";
                }
                else
                {
                    cout<<"  ";
                }
            }
            cout<<endl;
        }
    }
    else
    {
        cout<<"Please enter an odd number of rows."<<endl;
    }

}
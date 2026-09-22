#include<iostream>
using namespace std;
int Combination(int x, int r)
{
    int xfact = 1;
    for(int i = 1;i<=x;i++)
    {
        xfact*=i;
    }
    int rfact = 1;
    for(int i = 1;i<=r;i++)
    {
        rfact*=i;
    }
    int xrfact = 1;
    for(int i = 1;i<=x-r;i++)
    {
        xrfact*=i;
    }
    return xfact/(rfact*xrfact);
}



int main()
{
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;

    // Code for generating Pascal's Triangle
    for(int i = 0;i<=n;i++)
    {   
        for(int j = 1;j<=n-i+1;j++)
        {
            cout<<" ";
        }
        
        for(int j = 0;j<=i;j++)
        { 
            cout<<Combination(i,j)<<" ";
        }
          cout<<endl;
    }
  
}
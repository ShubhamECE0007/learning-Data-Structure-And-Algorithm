#include<iostream>
using namespace std;

int Fact(int x){
    int fact = 1;
    for(int i = 1;i<=x;i++)
    {
        fact*=i;
    }
    return fact;
}
int main()
{
   int n,r;
   cout<<"Enter the value of n and r: ";
   cin>>n>>r;

   Fact(n);
   Fact(r);
   Fact(n-r);

   cout<<"The value of nPn is: "<<Fact(n)/Fact(n-r);

}
//Method 01

// #include<iostream>
// using namespace std;
// int combination(int n,int r)
// {
//     int nFact = 1;
//     for(int i= 1;i<=n;i++)
//     {
//    nFact*=i;
//     }

//       int rFact = 1;
//     for(int i= 1;i<=r;i++)
//     {
//          rFact*=i;
      
//     }
//   int n_rFact = 1;
//   for(int i = 1;i<=n-r;i++)
//   {
//     n_rFact*=i;
    
//   }
   
//   int ncr = nFact/(n_rFact*rFact);
//   return ncr;
// }

//  int main()
//  {
//     int n,r;
//     cout<<"Enter the values of n and r: ";
//     cin>>n>>r;

// cout<<combination(n,r);

//  }

// Method 02
#include<iostream>
using namespace std;

int Fact(int x)
{
    int fact = 1;
    for(int i = 1 ;i<=x;i++)
    {
        fact*=i;
    }
    return fact;
}
int main()
{
  int n,r;
  cout<<"Enter the values of n and r: ";
  cin>>n>>r;
  
   Fact(n);
  Fact(r);
  Fact(n-r);

  cout<<Fact(n)/(Fact(r)*Fact(n-r));

}
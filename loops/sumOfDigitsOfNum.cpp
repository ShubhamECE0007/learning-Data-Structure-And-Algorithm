#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    int Sum = 0;
    int reverse = 0;
   int reversedSum = 0;
    while(n>0)
    {
        int digits = n%10;
        Sum = Sum+digits;
        n/=10;
    
    }
    cout<<"The sum of digits is: "<<Sum<<endl;

    while(n>0)
    {
        int digit = n%10;
        reverse = reverse*10 +digit;
        n/=10;
    }

        while(reverse>0)
        {
            reverse = reverse%10;
            reversedSum = reversedSum + reverse;
            reverse/=10;
        }
    

    cout<<"The reverse of the number is: "<<reverse<<endl;
    cout<<"The sum of digits in the reversed number is: "<<reversedSum<<endl;
}
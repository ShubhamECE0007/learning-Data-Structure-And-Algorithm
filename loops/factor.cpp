#include<iostream>
#include<cmath>

using namespace std;
int main(){
    int n ;
    cout<<"Enter a number to find its factors: ";
    cin>>n;
int count = 0;
    for(int i = 1;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {

            count++;
            break;
        }
    }
if(count == 1)
    {
        cout<<n<<" is neither prime nor composite"<<endl;
    }
    else if(count == 2)
    {
        cout<<n<<" is a prime number"<<endl;
    }
   else if(count >= 3)
    {
        cout<<n<<" is not a composite number"<<endl;
    }
    else
    {
        cout<<n<<" is a composite number"<<endl;
    }

    return 0;
    }


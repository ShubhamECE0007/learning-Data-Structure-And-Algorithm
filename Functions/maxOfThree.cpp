#include<iostream>
using namespace std;
void maxOfThree(int a, int b, int c)
{
if(a>=max(b,c))
{
    cout<<a<<" is the maximum number"<<endl;
}
if(b>=max(a,c)){

    cout<<b<<" is the maximum number"<<endl;
}
else{
    cout<<c<<" is the maximum number"<<endl;
}
}
int main()
{
    int a, b, c;
    cin>>a>>b>>c;
    maxOfThree(a, b, c);
}
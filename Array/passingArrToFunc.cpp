#include<iostream>
using namespace std;
void change(int x[])
{
    x[0]=20;
}
int main()
{
    int x[]={2,3,4,5,6};
    change(x);
    cout<<"First element of array is: "<<x[0]<<endl;

}
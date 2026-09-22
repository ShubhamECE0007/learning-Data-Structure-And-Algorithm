#include<iostream>
using namespace std;
void change(int* ptr)
{
   *ptr = 9;
}
int main()
{
    int a = 7;
    cout<<"Before change "<<a<<endl;
    change(&a);
    cout<<"After change "<<a<<endl;

}
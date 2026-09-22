#include<iostream>
using namespace std;
int n=5;
int stack[5];
int top=-1;
  
bool isEmpty(){
    return top<=-1;
}

 bool isFull()
 {
    return top>=n-1;
 }
 void push(int ITEM)
 {
    
    if(isFull())
    {
        cout<<"Overflow"<<endl;
    }
    else
    {
        top++;
        stack[top] = ITEM;
    }
 }

 void pop()
 {
    if(isEmpty())
{
    cout<<"Underflow"<<endl;
}

else{
    cout<<"the element is "<<stack[top]<<endl;
    top--;
}
 }


int main()
{

}
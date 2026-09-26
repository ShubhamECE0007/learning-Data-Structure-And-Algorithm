#include <iostream>
using namespace std;
class MyVector
{
private:
    int length; // kitne elements hai in vector  of times
    int *arr;
    int cap;

public:
    MyVector(int capacity, int default_value)
    { // Default Constructor
        length = cap = capacity;
        arr = new int[capacity];
        for (int i = 0; i < capacity; i++)
        {
            arr[i] = default_value;
        }
    }
    void pop_back()
    {
        if(length==0)
        {
            cout<<"The vector is empty";
        }
        length--;
    }

    void display()
    {
        for (int i = 0; i < length; i++)
        {
            cout << arr[i] << " ";
        }
    }

    void push_back(int x)
    {
        if (length == cap)
        {
            cap = 2 * cap;
            int *temp = new int[cap];
            for (int i = 0; i < length; i++)
            {
                temp[i] = arr[i];
            }
            delete[] arr;
            arr = temp;
        }
        arr[length++] = x;
    }
     
    int size()
    {
        cout<<length<<endl;
    }

       int get(int idx)
        {
            return arr[idx];
        }

        int set(int y, int idx)
        {
            arr[idx] = y;
        }
    };
int main()
{
    MyVector v(7, -1);
    v.display();
    cout << endl;
    v.pop_back();
    v.push_back(5);
    v.display();
    v.get(4);
}
#include<iostream>
using namespace std;
const int SIZE = 100;
class Queue{
    public:
    int data[SIZE];
int FRONT, REAR;
 
void initailizeQueue()
{
    FRONT = -1;
    REAR = -1;
}

bool isempty()
{
    if(FRONT==-1 && REAR==-1)
    {
        return 1;
    }
    return 0;
}

bool isFull()
{
   return  REAR==SIZE-1;
}

void enQueue(int info)
{
  if(isFull())
{
    cout<<"There is no space to add new element in the queue"<<endl;
}
if(FRONT == -1)
{
    FRONT = FRONT + 1;
}
REAR = REAR + 1;
data[REAR]= info;
}

int deQueue()
{
    if(isempty())
    {
        cout<<"There is no element to delete in th queue"<<endl;
    }

    int info = data[FRONT];
    if(FRONT == REAR)
    {
        FRONT = -1;
        REAR = -1;
    }
    else
    {
        FRONT = FRONT + 1;
    }

    return info;
}

void traverse()
{
    if(!isempty())
    {
        for(int i=FRONT;i<=REAR;i++)
        {
            cout<<data[i]<<" ";
        }
        cout<<endl;
    }
}
};
int main(){
    Queue q;
    q.initailizeQueue();
    q.enQueue(10);
    q.enQueue(20);
    q.enQueue(30);

    q.traverse();




}
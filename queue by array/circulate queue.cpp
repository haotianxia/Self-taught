#include <iostream>
using namespace std;
class Queue
{
public:
 Queue(){size=10;front=rear=0;Q=new int [size];}
 Queue(int size){this->size=size; front=rear=0; Q= new int[this->size];}
 void enqueue(int x);
 int dequeue();
 void Display();
private:
 int front;
 int rear;
 int size;
 int *Q;
};

void Queue::enqueue(int x){
    if ((rear+1)%size==front){
        cout<<"FULL"<<endl;
    }
    rear=(rear+1)%size;
    Q[rear]=x;    
}

int Queue:: dequeue(){
    
    if(rear==front){
        cout<<"Empty"<<endl;
    }
    front=(front+1)%size;
    int x=Q[front];
    return x;
    }

void Queue :: Display(){
    int i=(front+1);
    do{
        cout<<Q[i];
        i=(i+1)%size;
    }while(i!=(rear+1)%size);
    cout<<endl;
}

int main(){
    Queue q(5);

 q.enqueue(10);
 q.enqueue(20);
 q.enqueue(30);
 q.dequeue();
 q.Display();

}
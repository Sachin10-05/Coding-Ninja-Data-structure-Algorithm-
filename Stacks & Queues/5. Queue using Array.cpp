//Theory of QUEUE:
/*
  * Linear Data structure.
  * ADT
  * insertion from Rear and deletion from front.
  * Insertion ----> Enqueue
  * Deletion -----> Dequeue
  * FIFO
  * Implementation: i) using Array
                    ii)using LL
*/

*****************************************************************************************************************************************************************************
*****************************************************************************************************************************************************************************

1) Implementation of Queue using Static Array:
   -------------------------------------------
     
* T.C of push()   = O(1)
* T.C of pop()    = O(1)
* T.C of Front()  = O(1)
* T.C of isEmpty()= O(1)
* T.C of Size()   = O(1)




#include<bits/stdc++.h>
using namespace std;

class Queue
{
   private:
      int *arr;
      int front;  //front index
      int rear;   //rear index
      int size;
        
   public:
   //constructor
   Queue(int size)
   {
      this->size = size;
      arr = new int[size];
      front = 0;
      rear = 0;
   }
    
  
   //Enqueue/push 
   void push(int data)
   {
      //if queue is full
      if(rear==size)
      {
         cout << "Queue is Full" << endl;
         return;
      }
      else
      {
         arr[rear] = data;
         rear++;
      }
   }
    
    
   //Dequeue/pop
   void pop()
   {
      //if queue is empty
      if(front == rear)
      {
         front = 0;
         rear = 0;
         cout << "Queue is empty" << endl;
         return;
      }
      else
      {
         arr[front] = -1;
         front++;
      }
   }
    
    
   //isEmpty
   bool isEmpty()
   {
      if(front == rear)
         return true;
      return false;
   }
    
    
   //Front
   int Front()
   {
      if(front == rear)
         return -1;
      else
         return arr[front]; 
   }
    
    
   //Size
   int Size()
   {
      return rear-front;
   }
};




int main()
{
   Queue q(5);
	 q.push(10);
	 q.push(20);
	 q.push(30);
	 q.push(40);
	 q.push(50);
	 q.push(60);
   cout << q.Front() << endl;
	 q.pop();
	 q.pop();
	 q.pop();
	 q.pop();
	 q.pop();
	 cout << q.Size() << endl;
	 cout << q.isEmpty() << endl;
}






*****************************************************************************************************************************************************************************
*****************************************************************************************************************************************************************************
*****************************************************************************************************************************************************************************
*****************************************************************************************************************************************************************************
*****************************************************************************************************************************************************************************


2) Implementation of Queue using Dynamic Array:
   --------------------------------------------


#include<bits/stdc++.h>
using namespace std;

class Queue
{
   private:
      int *arr;
      int front;
      int rear;
      int size;
        
   public:
   //constructor
   Queue()
   {
      size = 5;  //let assume initial size = 5 fixed.
      front = 0;
      rear = 0;
      arr = new int[size];
   }
    
   //push/Enqueue
   void push(int data)
   {
      //if queue is full
      if(rear == size)
      {
         int *newArr = new int[2*size];
         //copy element from Arr to newArr
         for(int i=0;i<size;i++)
         {
            newArr[i] = arr[i];
         }
         delete[] arr;
         arr = newArr;
         size = 2*size;
      }
      arr[rear] = data;
      rear++;
   }
    
   //pop/Dequeue
   void pop()
   {
      //if queue is empty
      if(rear == front)
      {
         front  = 0;
         rear = 0;
         cout << "Queue is Empty" << endl;
         return;
      }
      else
      {
         arr[front] = -1;
         front++;
      }
   }
    
   //Front
   int Front()
   {
      //if queue is empty
      if(front == rear)
         return -1;
      else
      {
         return arr[front];
      }
   }
    
   //isEmpty()
   bool isEmpty()
   {
      if(front == rear)
         return true;
      return false;
   }
    
   //Size
   int Size()
   {
      return rear-front;
   }
};




int main()
{
   Queue q;
	 q.push(10);
	 q.push(20);
	 q.push(30);
	 q.push(40);
	 q.push(50);
	 q.push(60);
	 q.push(70);
	 q.push(80);
	 q.push(90);
   cout << q.Front() << endl;
	 q.pop();
	 q.pop();
	 q.pop();
	 cout << q.Size() << endl;
	 cout << q.isEmpty() << endl;
}






*****************************************************************************************************************************************************************************
*****************************************************************************************************************************************************************************
*****************************************************************************************************************************************************************************
*****************************************************************************************************************************************************************************
*****************************************************************************************************************************************************************************






































































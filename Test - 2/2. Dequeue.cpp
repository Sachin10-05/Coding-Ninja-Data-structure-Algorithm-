/*
problem:
********
You need to implement a class for Dequeue i.e. for double ended queue. In this queue, elements can be inserted and deleted from both the ends.
Sample Input 1:
5 1 49 1 64 2 99 5 6 -1
Sample Output 1:
-1
64
99
*/





********************************************************************************************************************************************************************************
********************************************************************************************************************************************************************************

//solution:
***********



#include<iostream>
using namespace std;

class Deque
{
   private:
   int *arr;
   int front;
   int rear;
   int size;
    
   public:
   //constructor
   Deque(int size)
   {
      this->size = size;
      arr = new int[size];
      front  = -1;
      rear = -1;
   }
    
    
   bool isFull() 
   {
      if((front==0 && rear==size-1) || (rear==(front-1)%(size-1)))
         return true;
      return false;
	}
 
    
   bool isEmpty() 
   {
      if(front == -1)
         return true;
      return false;
	}
    
    
   //PUSH_FRONT
   void insertFront(int data)
   {
      //case-1: if queue is full push not possible.
      if(isFull())
      {
         cout << -1 << endl;
         return;
      }
      //case-2: insertion at front
      else if(isEmpty())
      {
         front = 0;
         rear = 0;
      }
      //case-3: insert at end
      else if(front==0 && rear!=size-1)
      {
         front = size-1;
      }
      else
      {
         front--;
      }
      arr[front] = data;
   }
    
    
   //PUSH_REAR
   void insertRear(int data)
   {
      //case-1: if queue is full push not possible.
      if(isFull())
      {
         cout << -1 << endl;
         return;
      }
      //case-2: insertion at front
      else if(isEmpty())
      {
         front = 0;
         rear = 0;
      }
      //case-3: insert at end
      else if(front!=0 && rear==size-1)
      {
         rear=0;
      }
      else
      {
         rear++;
      }
      arr[rear] = data;
   }
    
    
   //POP_FRONT
   void deleteFront()
   {
      if(isEmpty())
      {
         cout << -1 << endl;
         return;
      }
      int ans = arr[front];
      arr[front] = -1;
        
      //if only single element is present.
      if(front == rear)
      {
         front = -1;
         rear = -1;
      }
      else if(front == size-1)
      {
         front = 0;
      }
      else
      {
         front++;
      }
   }
    
    
   //POP_REAR
   void deleteRear()
   {
      if(isEmpty())
      {
         cout << -1 << endl;
         return;
      }
      int ans = arr[rear];
      arr[rear] = -1;
        
      if(front == rear)
      {
         front = -1;
         rear = -1;
      }
      else if(rear == 0)
      {
         rear = size-1;
      }
      else
      {
         rear--;
      }
   }
    
    
   int getFront()
   {
      if (isEmpty()) 
      {
         return -1 ;
      }
      return arr[front];
   }

    
   int getRear() 
   {
      if(isEmpty()) 
      {
         return -1 ;
      }
      return arr[rear];
   }
};






int main()
{
   Deque dq(10);
   int choice,input;
   while(true) 
   {
      cin >> choice;
      switch (choice) 
      {
         case 1:
            cin >> input;
            dq.insertFront(input);
            break;
         case 2:
            cin >> input;
            dq.insertRear(input);
            break;
         case 3:
            dq.deleteFront();
            break;
         case 4:
            dq.deleteRear();
            break;
         case 5:
            cout << dq.getFront() << "\n";
            break;
         case 6:
            cout << dq.getRear() << "\n";
            break;
         default:
            return 0;
       }
   }
   return 0;
}






********************************************************************************************************************************************************************************
********************************************************************************************************************************************************************************



















//STATIC IMPLEMENTATION OF STACK (using Array):
***********************************************

* Algorithm: -------> Declare Array
             -------> declare array Size
             -------> declare array index = 0 or -1
             -------> Now perform operation such as - push(), pop(), top(), isEmpty(), size().
  
	
	
#include<bits/stdc++.h>
using namespace std;

class Stack
{
   private:
      int *arr;
      int index;
      int size;
   
   public:
  
   //constructor
   Stack(int size)
   {
      this->size = size;
      arr = new int[size];
      index = -1; ---------------> indexing can be started from 0 also
   }
    
  
   //PUSH operation
   void push(int data)
   {
      //if stack is full
      if(size-index > 1)
      {
         index++;
         arr[index] = data;
      }
      else
      {
         cout << " Stack Overflow" << endl;
      }
   }
    
  
   //POP operation
   void pop()
   {
      //if stack is not empty
      if(index >= 0)
      {
         index--;
      }
      else
      {
         cout << "Stack is Empty!" << endl;
         return;
      }
   }
    
  
   //PEEK element
   int top()
   {
      if(index >= 0)
         return arr[index];
      else
      {
         cout << "Stack is Empty!" << endl;
         return -1;
      }
   }
    
  
   //SIZE of stack
   int Size()
   {
      return size;
   }
    
   //Stack is Empty or Not
   bool isEmpty()
   {
      if(index == -1)
         return true;
      return false;
   }
};



int main()
{
    Stack st(5);
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    st.push(6);
    cout << st.top() << endl;
}






***********************************************************************************************************************************************************************
***********************************************************************************************************************************************************************
***********************************************************************************************************************************************************************
***********************************************************************************************************************************************************************
***********************************************************************************************************************************************************************


//Static implementation of Stack (using Array)
(considering index=0)
************************************************


/*
#include<bits/stdc++.h>
using namespace std;

class Stack
{
   private:
   int *arr;         
   int index;
   int size;
	
   public:

   //constructor
   Stack(int size)
   {
      arr = new int[size];
      index = 0;
      this->size = size;
   }	
		
   int Size()
   {
      return index;
   }
		
   bool isEmpty()
   {
      if(index == 0)
         return true;
      return false;
   }
		
   void push(int data)
   {
      if(index == size)
      {
         cout << "Stack Overflow " << endl;
	 return;
      }
      arr[index] = data;
      index++;
   }
		
   int pop()
   {
      if(isEmpty())
      {
         cout << "Stack underflow " << endl;
	 return INT_MIN;
      }
      index--;
      return arr[index];
   }
		
   int top()
   {
      if(isEmpty())
      {
         cout << "Stack is Empty " << endl;
	 return INT_MIN;
      }
      return arr[index - 1];
   }
};



int main()
{
   Stack st(5);
   st.push(1);
   st.push(2);
   st.push(3);
   st.push(4);
   st.push(5);
   st.push(6);
   cout << st.top() << endl;
}
*/





***********************************************************************************************************************************************************************
***********************************************************************************************************************************************************************
***********************************************************************************************************************************************************************
***********************************************************************************************************************************************************************
***********************************************************************************************************************************************************************


//DYNAMIC implementation of Stack (sing Array)
(considering index=0)
*************************************

Note: Above approach with static array implementation of stack is limited to fixed size only.

#include<bits/stdc++.h>
using namespace std;

template<typename T>
class Stack
{
   private:
   T *arr;
   int size;
   int index;
		
   public:
   Stack()
   {
      index = 0;
      arr = new T[4];  //let assume size = 4;
      size = 4;
   }
		
		
   int Size()
   {
      return index;
   }
		
		
   bool isEmpty()
   {
      if(size() == 0)
         return true;
      return false;
   }
		
		
   void push(T data)
   {
      if(index == size)
      {
         T *newArr = new T[2 * size];  //making static arry to dynamic
	 for(int i=0;i<size;i++)
	 {
	    newArr[i] = arr[i];
	 }
	 size = (2 * size);
	 delete[] arr;
	 arr = newArr;
      }
      data[index] = data;
      index++;
   }
		
		
   T pop()
   {
      if(isEmpty())
      {
         cout << "Stack empty " << endl;
	 return 0;
      }
      index--;
      return arr[index];
   }
		
		
   T top()
   {
      if(isEmpty())
      {
         cout << "Stack empty " << endl;
	 return 0;
      }
      return arr[index - 1];
   }
};




int main()
{
   Stack<char> s;   
   s.push(97);
   s.push(98);
   s.push(99);
   s.push(100);
   s.push(101);
	
   cout << s.Size() << endl;
   cout << s.isEmpty() << endl;
   cout << s.top() << endl;
   cout << s.pop() << endl;
   cout << s.top() << endl;
}





***********************************************************************************************************************************************************************
***********************************************************************************************************************************************************************
***********************************************************************************************************************************************************************
***********************************************************************************************************************************************************************
***********************************************************************************************************************************************************************































































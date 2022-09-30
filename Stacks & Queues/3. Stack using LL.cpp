//implementation of stack using LL
***********************************


#include<bits/stdc++.h>
using namespace std;

template<typename T>
class Node
{
   public:
	  T data;
	  Node<T> *next;
	  Node(T data)
	  {
		  this->data = data;
		  this->next = NULL;
	  }
};



template<typename T>
class Stack
{
	private:
	Node<T> *head;
	int size;
	
	public:
		
	//constructor
	Stack()  
	{
		head = NULL;
		size = 0;
	}
		
		
	int getSize()
	{
		return size;
	}
		
		
	bool isEmpty()
	{
		if(getSize() == 0 || head == NULL || size == 0)
			return true;
		return false;
	}
		
		
	void push(T element)
	{
		Node<T> *n = new Node<T>(element);
		n->next = head;
		head = n;
		size++;
	}
		
		
	T pop()
	{
		if(head == NULL)
		{
			cout << "Stack is Empty " << endl;
			return -1;
		}
		T ans = head->data;
		Node<T> *temp = head;
		head = head->next;
		delete temp;
		size--;
		return ans;
   	}
		
		
	T top()
	{
		if(head == NULL)
		{
			cout << "Stack is Empty " << endl;
			return -1;
		}
		return head->data;
	}
};



int main()
{
	Stack<int> s;
	s.push(97);
	s.push(98);
	s.push(99);
	s.push(100);
	s.push(101);
	
	cout << s.getSize() << endl;
	cout << s.isEmpty() << endl;
	cout << s.top() << endl;
	cout << s.pop() << endl;
	cout << s.top() << endl;
}





****************************************************************************************************************************************************************************
****************************************************************************************************************************************************************************
****************************************************************************************************************************************************************************
****************************************************************************************************************************************************************************
****************************************************************************************************************************************************************************




//solution:
************

class Stack 
{
	// Define the data members
    Node *head;
    int size;
   public:
    Stack() {
        // Implement the Constructor
        head = NULL;
        size = 0;
    }

	/*----------------- Public Functions of Stack -----------------*/

    int getSize() {
        // Implement the getSize() function
        return size;
    }

    bool isEmpty() {
        // Implement the isEmpty() function
        return size == 0;
    }

    void push(int element) {
        // Implement the push() function
        Node *newNode = new Node(element);
        if(head == NULL) {
            head = newNode;
            size++;
            return;
        }
        newNode -> next = head;
        head = newNode;
        size++;
        return;
        
    }

    int pop() {
        // Implement the pop() function
        if(head == NULL) {
            return -1;
        }
        int temp = head -> data;
        head = head -> next;
        size--;
        return temp;
    }

    int top() {
        // Implement the top() function
        if(head == NULL) {
            return -1;
        }
        return head -> data;
    }
};



























1) Linked List are best suited:
   a) for relatively permanent collections of data.
   b) for the size of the structure is constantly changing. ✔
   c) for random Access of elements 
   d) None of these
   
   
**************************************************************************************************************************************************************************

2) What is the output
   class Node
   {
      public:
         int data;
         Node *next;

      Node(int data)
      {
         this -> data = data;
         this -> next = NULL;
      }
   };

   void print(Node *head)
   {
      Node *temp = head;
      while(temp != NULL)
      {
         cout << temp -> data << " ";
         temp = temp -> next;
      }
      cout << endl;
   }

   void increment(Node *head)
   {
      Node *temp = head;
      while(temp != NULL)
      {
         temp -> data++;
         temp = temp -> next;
      }
   }

   int main()
   {
      Node *node1 = new Node(10);
      Node *node2 = new Node(20);
      node1 -> next = node2;
      increment(node1);
      print(node1);
   }

   a) 10 20
   b) 11 21 ✔
   c) Error
   d) None
   
   
***********************************************************************************************************************************************************************

3) What is the output
   class Node
   {
      public:
         int data;
         Node *next;
         Node(int data)
         {
            this -> data = data;
            this -> next = NULL;
         }
   };

   void print(Node *head)
   {
      Node *temp = head;
      while(temp != NULL)
      {
         cout << temp -> data << " ";
         temp = temp -> next;
      }
      cout << endl;
   }

   int main()
   {
      Node *node1 = new Node(10);
      Node *node2 = new Node(20);
      node2 -> next = node1;
      print(node2);
   }

   a) 10 20
   b) 20 10 ✔
   c) Error
   d) None of these
   
   
***********************************************************************************************************************************************************************

4) What is the output
   class Node
   {
      public:
         int data;
         Node *next;
         Node(int data)
         {
            this -> data = data;
            this -> next = NULL;
         }
   };

   void print(Node *head)
   {
      Node *temp = head;
      while(temp != NULL)
      {
         cout << temp -> data << " ";
         temp = temp -> next;
      }
      cout << endl;
   }

   int main()
   {
      Node *node1 = new Node(10);
      Node *node2 = new Node(20);
      Node *node3 = new Node(20);
      Node *node4 = new Node(20);
      node1 -> next = node2;
      node2 -> next = node3;
      node3 -> next = node4;
      print(node2);
   }

   a) 10 20 30 40
   b) 20 30 40
   c) Error 
   d) None ✔
   
   
***********************************************************************************************************************************************************************




















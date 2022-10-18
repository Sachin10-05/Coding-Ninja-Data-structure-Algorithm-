/*
problems:
*********
Implement the function RemoveMin for the min priority queue class.
For a minimum priority queue, write the function for removing the minimum element present. Remove and return the minimum element.
Note : main function is given for your reference which we are using internally to test the code.
*/






****************************************************************************************************************************************************************************
****************************************************************************************************************************************************************************

//solution:
***********


#include <iostream>
#include <climits>
#include <vector>
using namespace std;


class PriorityQueue 
{
   private:
	 vector<int> pq;
   
   public:
   //check empty or not
   bool isEmpty() 
   { 
      return pq.size() == 0; 
   }
  
   //size of PQ
   int getSize() 
   { 
      return pq.size(); 
   }

   //min of PQ
   int getMin() 
   {
      if (isEmpty()) 
      {
         return 0;
      }
      return pq[0];
   }
    
   
   //INSERTION
   void insert(int element) 
   {
      pq.push_back(element);
		  int childIndex = pq.size() - 1;
		  while (childIndex > 0) 
      {
         int parentIndex = (childIndex - 1) / 2;
			   if (pq[childIndex] < pq[parentIndex]) 
         {
            int temp = pq[parentIndex];
            pq[parentIndex] = pq[childIndex];
            pq[childIndex] = temp;
         } 
         else 
         {
            break;
         }
			   childIndex = parentIndex;
      }
   }

    
   //DELETION
   int removeMin() 
   {
      // Write your code here
      if(isEmpty())
         return INT_MIN;
        
      //step-1: Replace 0th index of array(i.e, root) with element at last index of array
      int ans = pq[0];
      pq[0] = pq[pq.size()-1];
      pq.pop_back();
        
      //step-2: find left childIndex and right childIndex
      int parentIndex = 0;  //i=0
      int leftChildIndex = 2*parentIndex + 1;      //using 2*i + 1
      int rightChildIndex = 2*parentIndex + 2;     //using 2*i + 2
		
      //tree will be already in CBT
      //Now to satisfy heap order property
      //Down-heapify:------------> move from top to bottom
      while(leftChildIndex < pq.size())
      {
         int minIndex = parentIndex;
         if(pq[minIndex] > pq[leftChildIndex])
            minIndex = leftChildIndex;
            
         if(pq[minIndex] > pq[rightChildIndex] && rightChildIndex < pq.size())
            minIndex = rightChildIndex;
            
         if(minIndex == parentIndex)
            break;
            
         //swapping
         int temp = pq[minIndex];
         pq[minIndex] = pq[parentIndex];
         pq[parentIndex] = temp;
            
         parentIndex = minIndex;
         leftChildIndex = 2*parentIndex + 1;
         rightChildIndex = 2*parentIndex + 2;
      }
      return ans;
   }
};





int main() 
{
   PriorityQueue pq;
   int choice;
   cin >> choice;
   while (choice != -1) 
   {
      switch (choice) 
      {
         // insert
         case 1:  
            int element;
            cin >> element;
            pq.insert(element);
            break;
          
         // getMin
         case 2:  
            cout << pq.getMin() << "\n";
            break;
          
         // removeMax
         case 3:  
            cout << pq.removeMin() << "\n";
            break;
            
         // size
         case 4:  
            cout << pq.getSize() << "\n";
            break;
            
         // isEmpty
         case 5:  
            cout << (pq.isEmpty() ? "true\n" : "false\n");
          
         default:
            return 0;
        }
        cin >> choice;
    }
}









****************************************************************************************************************************************************************************
****************************************************************************************************************************************************************************
****************************************************************************************************************************************************************************
****************************************************************************************************************************************************************************



























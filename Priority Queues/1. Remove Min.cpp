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
using namespace std;
#include <vector>

class PriorityQueue 
{
   private:
   vector<int> pq;
    
   public:
   bool isEmpty() 
   { 
      return pq.size() == 0; 
   }

    
   int getSize() 
   { 
      return pq.size(); 
   }

    
   int getMin() 
   {
      if (isEmpty()) 
      {
         return 0;
      }
      return pq[0];
   }
    

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

    
    
   //T.C = O(nlog(n))
   //S.C = O(N)
   //deletion of MinHeap
   int removeMin()
   {
      //check empty or not
      if(isEmpty())
         return INT_MIN;
            
      //Replace first element with last index element
      int ans = pq[0];
      pq[0] = pq[pq.size()-1];
      pq.pop_back();
        
      //to maintain heap order property
      //down-heapify
      //i.e, we need to compare both child index with their parent Index
      //ans swap accordingly
        
      int parentIndex = 0;
      int leftChildIndex = 2*parentIndex + 1;
      int rightChildIndex = 2*parentIndex + 2;
      while(leftChildIndex < pq.size())
      {
         int minIndex = parentIndex;   //for storing min of both child
         //case-1:
         if(pq[minIndex] > pq[leftChildIndex])
         {
            //update min index
            minIndex = leftChildIndex;
         }
            
         //case-2:
         if(rightChildIndex < pq.size() && pq[minIndex] > pq[rightChildIndex] )
         {
            //update min Index
            minIndex = rightChildIndex;
         }
            
         //case-3:
         if(parentIndex == minIndex)
         {
            break;
         }
            
         //swapping
         int temp = pq[parentIndex];
         pq[parentIndex] = pq[minIndex];
         pq[minIndex] = temp;
            
         //update parentIndex
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



























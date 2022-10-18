//MAX PRIORITY QUEUE
//******************


#include <iostream>
#include <climits>
#include <vector>
using namespace std;

class PriorityQueue 
{
   // Declare the data members here
   vector<int> pq;

   public:
   PriorityQueue() 
   {
      // Implement the constructor here
      // it will be vacant
   }

   /**************** Implement all the public functions here ***************/

   bool isEmpty() 
   {
      return pq.size()==0;
   }
    
    
   int getSize() 
   { 
      return pq.size();
   }
    
    
   int getMax() 
   {
      if(isEmpty())
         return INT_MIN;
      return pq[0];
   }
    
    
   void insert(int element) 
   {
      pq.push_back(element);
        
      //now check heap order property maintained or not
      int childIndex = pq.size()-1;
      while(childIndex > 0)
      {
         int parentIndex = (childIndex-1)/2;
         if(pq[parentIndex] > pq[childIndex])
         {
            return;
         }
         //swapping
         int temp = pq[parentIndex];
         pq[parentIndex] = pq[childIndex];
         pq[childIndex] = temp;
         childIndex = parentIndex;
      }
   }

    

   int removeMax() 
   {
	    //base case
      if(isEmpty())
         return INT_MIN;
        
      int ans = pq[0];
      pq[0] = pq[pq.size()-1];
      pq.pop_back();
        
      //down-heapify
      int parentIndex = 0;
      int leftChildIndex = 2*parentIndex + 1;
      int rightChildIndex = 2*parentIndex + 2;
        
      while(leftChildIndex < pq.size())
      {
         int maxIndex = parentIndex;
         //case-1:
         if(pq[leftChildIndex] > pq[maxIndex])
         {
            maxIndex = leftChildIndex;
         }
         //case-2:
         if(rightChildIndex < pq.size() && pq[rightChildIndex] > pq[maxIndex])
         {
            maxIndex = rightChildIndex;
         }
         //case-3:
         if(maxIndex == parentIndex)
         {
            break;
         }
         int temp = pq[maxIndex];
         pq[maxIndex] = pq[parentIndex];
         pq[parentIndex] = temp;
            
         parentIndex = maxIndex;
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
         case 1:  // insert
            int element;
            cin >> element;
            pq.insert(element);
            break;
         case 2:  // getMax
            cout << pq.getMax() << "\n";
            break;
         case 3:  // removeMax
            cout << pq.removeMax() << "\n";
            break;
         case 4:  // size
            cout << pq.getSize() << "\n";
            break;
         case 5:  // isEmpty
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














































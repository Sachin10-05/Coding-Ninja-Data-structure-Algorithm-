/*
problem:
********
You are given a stream of 'N' integers. For every 'i-th' integer added to the running list of integers, print the resulting median.
Print only the integer part of the median.

Input Constraints
    0 <= N <= 10 ^ 5
    1 <= ARR[i] <= 10 ^ 5
    Time Limit: 1 sec
    
Sample Input 1 :
6
6 2 1 3 7 5
Sample Output 1 :
6 4 2 2 3 4

Explanation of Sample Output 1 :
S = {6}, median = 6
S = {6, 2} -> {2, 6}, median = 4
S = {6, 2, 1} -> {1, 2, 6}, median = 2
S = {6, 2, 1, 3} -> {1, 2, 3, 6}, median = 2
S = {6, 2, 1, 3, 7} -> {1, 2, 3, 6, 7}, median = 3
S = {6, 2, 1, 3, 7, 5} -> {1, 2, 3, 5, 6, 7}, median = 4

Sample Input 2 :
5
5 4 3 2 1
Sample Output 2 :
5 4 4 3 3
*/






****************************************************************************************************************************************************************************
****************************************************************************************************************************************************************************
****************************************************************************************************************************************************************************
****************************************************************************************************************************************************************************

//solution:
***********


//T.C = O(N*Log(N))
//s.C = O(N)
#include <iostream>
#include <vector>
#include <queue>
using namespace std;


void findMedian(int *arr, int n)
{
   priority_queue<int, vector<int>, greater<int> > minHeap;  //min priority queue
   priority_queue<int> maxHeap;                              //max priority queue
      
   for(int i=0;i<n;i++)
   {
      if(maxHeap.size()!=0  &&  arr[i]>maxHeap.top())
      {
         minHeap.push(arr[i]);
      }
      else
      {
         maxHeap.push(arr[i]);
      }
    
      //keeping in check that both heap are almost of same size
      if(int(maxHeap.size()-minHeap.size() )> 1)
      {  
         int x=maxHeap.top();
         maxHeap.pop();
         minHeap.push(x);
      }
      else if(int(minHeap.size()-maxHeap.size()) > 1)
      {  
         int x=minHeap.top();
         minHeap.pop();
       	 maxHeap.push(x);
      }
    
    
      int c=maxHeap.size()+minHeap.size();  //count
      //checking size of list to find median
      if(c%2==0)
         cout<<(maxHeap.top()+minHeap.top())/2 << " ";
   	  else
      {
         if(maxHeap.size()>minHeap.size())
            cout<<maxHeap.top() << " ";
         else
            cout<<minHeap.top() << " ";
      }
   }
}





int main() 
{
   int n;
   cin >> n;
   int* arr = new int[n];
   for (int i = 0; i < n; ++i) 
   {
      cin >> arr[i];
   }
   findMedian(arr,n);
   delete[] arr;
}








****************************************************************************************************************************************************************************
****************************************************************************************************************************************************************************
****************************************************************************************************************************************************************************
****************************************************************************************************************************************************************************































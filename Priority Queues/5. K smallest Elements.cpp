/*
problem:
********
You are given with an integer k and an array of integers that contain numbers in random order. Write a program to find k smallest numbers from given array. 
You need to save them in an array and return it.
Time complexity should be O(n * logk) and space complexity should not be more than O(k).
Note: Order of elements in the output is not important.

Sample Input 1 :
13
2 12 9 16 10 5 3 20 25 11 1 8 6 
4
Sample Output 1 :
1 2 3 5 
*/





****************************************************************************************************************************************************************************
****************************************************************************************************************************************************************************
****************************************************************************************************************************************************************************
****************************************************************************************************************************************************************************

//solution:
***********

#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;


//T.C = O(N*Log(K))
//S.C = O(K), for priority queue
vector<int> kSmallest(int arr[], int n, int k) 
{
   vector<int> ans;
   priority_queue<int> pq;
   //push first k element into pq
   for(int i=0;i<k;i++)
   {
      pq.push(arr[i]);
   }
    
   for(int i=k;i<n;i++)
   {
      //compare kth element in array with max of pq
      if(pq.top() > arr[i])
      {
         pq.pop();
         pq.push(arr[i]);
      }
   }
    
   //finaly print pq
   while(!pq.empty())
   {
      ans.push_back(pq.top());
      pq.pop();
   }
   return ans;
}





int main() 
{
   int size;
   cin >> size;
   int *input = new int[size];
   for (int i = 0; i < size; i++) 
   {
      cin >> input[i];
   }
   int k;
   cin >> k;
   vector<int> output = kSmallest(input, size, k);
   sort(output.begin(), output.end());
   for (int i = 0; i < output.size(); i++) 
   {
      cout << output[i] << " ";
   }
   delete[] input;
}









****************************************************************************************************************************************************************************
****************************************************************************************************************************************************************************
****************************************************************************************************************************************************************************
****************************************************************************************************************************************************************************
























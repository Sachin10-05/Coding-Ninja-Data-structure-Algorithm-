/*
Problems:
**********

Sort an array A using Merge Sort.
Change in the input array itself. So no need to return or print anything.

Sample Input 1 :
5
2 1 5 2 3

Sample Output 1 :
1 2 2 3 5 
*/





******************************************************************************************************************************************************************************
//MERGE SORT
*************

* Merge sort is a recursive algorithm
* based on principle of divide and conquer 
* stable
* Merge sort is useful for sorting LL in O(n*log(N)) time.
* T.C = O(N*log(N))
* S.C = O(N)
  
  
 
  
******************************************************************************************************************************************************************************
  
//solution-1:
**************
  
#include<bits/stdc++.h>
using namespace std;

void Merge(int *arr, int start, int end)
{
    int mid = start + (end-start)/2;
    
    int len1 = mid-start+1;
    int len2 = end-mid;
    
    int *arr1 = new int[len1];
    int *arr2 = new int[len2];
    
    //COPY VALUES
    int x = start;
    for(int i=0;i<len1;i++)
    {
        arr1[i] = arr[x];
        x++;
    }
    
    x = mid+1;
    for(int i=0;i<len2;i++)
    {
        arr2[i] = arr[x];
        x++;
    }
    
    //MERGE TWO UNSORTED ARRAY
    int i=0;
    int j=0;
    int index = start;  //index of main array
    while(i<len1 && j<len2)
    {
        if(arr1[i] > arr2[j])
        {
            arr[index] = arr2[j];
            j++;
            index++;
        }
        else
        {
            arr[index] = arr1[i];
            i++;
            index++;
        }
    }
    
    while(i<len1)
    {
        arr[index] = arr1[i];
        i++;
        index++;
    }
    
    while(j<len2)
    {
        arr[index] = arr2[j];
        j++;
        index++;
    }
}


void helper(int *arr, int start, int end)
{
   //base case
   if(start >= end)
      return;
    
   int mid = start + (end-start)/2;
    
   //left array sorting
   helper(arr,start,mid);
    
   //right array sorting
   helper(arr,mid+1,end);
    
   //merge left and right array
   Merge(arr, start, end);
}


void mergeSort(int arr[], int n)
{
   int start = 0;
   int end = n - 1;
   helper(arr, start, end);
}


int main() 
{
   int length;
   cin >> length;
   int* input = new int[length];
   for(int i=0; i < length; i++)
      cin >> input[i];
   mergeSort(input, length);
   for(int i = 0; i < length; i++)
      cout << input[i] << " ";
}






***************************************************************************************************************************************************************************
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  

/*
Sort an array A using Quick Sort.
Change in the input array itself. So no need to return or print anything.

Sample Input 1 :
6 
2 6 8 5 4 3

Sample Output 1 :
2 3 4 5 6 8
*/




******************************************************************************************************************************************************************************

//QUICK SORT
*************

* Divide and Conquer algorithm.
* The key process in quickSort is a partition().
* Not  Stable, but can be made stable.
* Quick sort can be implemented iteratively also.
  
* Algorithm:
  ----------
  step-1: Base case: (s>=e) means array already sorted.
  step-2: Find partition index using ---->  partition(arr, s, e):
                   * Select first element as pivot element. (pivot = arr[s]).
                   * Traverse through whole array and count no of elements smaller then pivot element.
                   * swap(arr[s], arr[s + count]). So that pivot element is place dat right place.
                     
                   * Arrange smaller element then pivot at left part of pivot element.
                   * Arrange larger element then pivot at rigth part of pivot element.
  step-3: quickSort(arr, s, pivot-1);
  step-4: quickSort(arr, pivovt+1, e);





****************************************************************************************************************************************************************************

* Time Complexity: worst case : O(N^2)
                   Best case: O(N*log(N))
                   Avg case:  O(N*log(N))
* Space complexity: O(N)

* Why Quick Sort is preferred over MergeSort for sorting Arrays ?
* Why MergeSort is preferred over QuickSort for Linked Lists ? 



  
***************************************************************************************************************************************************************************
***************************************************************************************************************************************************************************

//solution:
************


void swap(int *a, int *b) 
{
   int temp = *a;
   *a = *b;
   *b = temp;
}


int partition(int *arr, int start, int end)
{
   int pivot = arr[start];
   
   //count of element less then pivot in array
   int count=0;                      
   for(int i=start+1;i<=end;i++)
   {
      if(arr[i] <= pivot)
         count++;
   }
   int pivotIndex = start + count;
    
   //fixing pivot element at right position using swap
   swap(&arr[start], &arr[pivotIndex]);
    
   //left and rigth part of pivot element
   int i = start;
   int j = end;
   while(i<pivotIndex && j>pivotIndex)
   {
      while(arr[i] <= pivot)
         i++;
            
      while(arr[j] > pivot)
         j--;
            
      if(i<pivotIndex && j>pivotIndex)
      {
         swap(&arr[i], &arr[j]);
         i++;
         j--;
      }
   }
   return pivotIndex;
}



void quickSort(int *arr, int start, int end)
{
   //BASE CASE
   if(start >= end)
      return;
        
   //PARTITION PROCESS
   int p = partition(arr, start, end);
    
   //RECURSIVE CALL
   quickSort(arr, start, p-1);
   quickSort(arr, p+1, end);
}



void quickSort(int *arr, int n)
{
   int start = 0;
   int end = n-1;
   quickSort(arr, start, end);
}


int main()
{
   int n;
   cin >> n;
  
   int *input = new int[n];
   for(int i = 0; i < n; i++) 
   {
      cin >> input[i];
   }
   quickSort(input, n);
   for(int i = 0; i < n; i++) 
   {
      cout << input[i] << " ";
   }
   delete [] input;
}






***************************************************************************************************************************************************************************



























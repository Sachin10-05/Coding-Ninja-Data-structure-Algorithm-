/*
problem:
--------
Given an undirected, connected and weighted graph G(V, E) with V number of vertices (which are numbered from 0 to V-1) and E number of edges.
Find and print the Minimum Spanning Tree (MST) using Prim's algorithm.
For printing MST follow the steps -
1. In one line, print an edge which is part of MST in the format - 
v1 v2 w
where, v1 and v2 are the vertices of the edge which is included in MST and whose weight is w. And v1  <= v2 i.e. print the smaller vertex first while printing an edge.
2. Print V-1 edges in above format in different lines.

Note : Order of different edges doesn't matter.

Input Format :
  Line 1: Two Integers V and E (separated by space) 
  Next E lines : Three integers ei, ej and wi, denoting that there exists an edge between vertex ei and vertex ej with weight wi (separated by space)

Output Format :
  Print the MST, as described in the task.

Constraints :
  2 <= V, E <= 10^5
  1 <= Wi <= 10^5
  Time Limit: 1 sec

Sample Input 1 :
4 4
0 1 3
0 3 5
1 2 1
2 3 8
Sample Output 1 :
0 1 3
1 2 1
0 3 5
*/




***********************************************************************************************************************************************************************
***********************************************************************************************************************************************************************
***********************************************************************************************************************************************************************
***********************************************************************************************************************************************************************

//solution:
------------

#include <iostream>
#include<climits>
using namespace std;

int findMinVer(int* weight ,bool *visited ,int v)
{
    int MinVertex=-1;
    for(int i=0 ;i<v ;i++)
    {
        if(!visited[i] &&(MinVertex==-1 ||weight[i] < weight [MinVertex]))
            MinVertex=i;
    }
    return  MinVertex;
}
void primsMST(int ** graph , int v ,int e){
    
    int * parent= new int[v];
    bool* visited =new bool[v];
     int* weight =new int[v];
    for(int i=0 ;i<v;i++)
    {
        visited[i] = false;
        weight[i]=INT_MAX;
    }
    //prims algo
    parent[0]=-1;
    weight[0]=0;
    
     for(int i=0;i<v-1;i++)
     { //find min vertex
         int MinVertex= findMinVer(weight , visited , v);
         visited[MinVertex]= true;
         // explore unvisited vertices
         
         for(int j=0 ;j<v ;j++)
         {
	   if(graph[MinVertex][j]&&!visited[j]&&graph[MinVertex][j]<weight[j])
                {
                    weight[j]=graph[MinVertex][j] ;
                    parent[j]=MinVertex;
                }
         }
     }
    
    
    
   /* for(int i=0;i<v-1;i++)
    {
        visited[i]=true;
        int min=INT_MAX;
        int vertex=-1;
        for(int j=0;j<v;j++)
        {
            if(!visited[j]&& graph[i][j] && graph[i][j]<min)
            {   min=graph[i][j];
               vertex=j;
            }  
          } 
        weight[vertex]=min;
        parent[vertex]=i;
    }*/
    
    for(int i =1 ;i< v ;i++)
    {
		if(parent[i]<i)
        {
            cout<<parent[i]<<" "<< i<<" "<<weight[i]<<endl;
        }
        else 
            cout<<i<<" "<<parent[i]<<" "<<weight[i]<<endl;
    }
    
    
    delete[]parent;
    delete[]visited;
    delete[]weight;
   // delete[]output;
    
    
}

int main()
{
  int V, E, tempX, tempY;
  cin >> V >> E;
 //input a graph;
  
    int ** graph = new int* [V];
    for(int i= 0 ; i<V ;i++ )
    {
        graph[i] = new int[V];
         for(int j=0 ;j<V ; j++)
             graph[i][j]=0;
    }
    
    for(int i=0;i<E ;i++)
    {
        int x,y,z;
        cin>>x>>y>>z;
        graph[x][y]=z;
        graph[y][x]=z;
    }
    
    primsMST(graph ,V,E);
    
  return 0;
}




***********************************************************************************************************************************************************************
***********************************************************************************************************************************************************************
***********************************************************************************************************************************************************************
***********************************************************************************************************************************************************************









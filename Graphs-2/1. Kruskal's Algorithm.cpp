/*
problem:
--------
Given an undirected, connected and weighted graph G(V, E) with V number of vertices (which are numbered from 0 to V-1) and E number of edges.
Find and print the Minimum Spanning Tree (MST) using Kruskal's algorithm.
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
  Time Limit: 1 sec

Sample Input 1 :
4 4
0 1 3
0 3 5
1 2 1
2 3 8
Sample Output 1 :
1 2 1
0 1 3
0 3 5
*/





***********************************************************************************************************************************************************************
***********************************************************************************************************************************************************************
***********************************************************************************************************************************************************************
***********************************************************************************************************************************************************************

//solution:
-----------

#include <iostream>
#include<bits/stdc++.h>
using namespace std;

class edge
{
    public:
    
    int s;//source
    int d;//destination
    int w;//weight

    edge(){}
    edge(int s,int d ,int w)
    {
        this->s=s;
        this->d=d;
        this->w=w;
    }
};

bool comp(edge const & a , edge const & b)
{
		return a.w < b.w;
}
int findparent(int * parent ,int v)
{
    if(parent[v]==v)
    return v;
    
    return findparent(parent,parent[v]);
}
void kruskalMST(edge * input, int v , int e)
{//sort in ascending order on basis of weights of edges
    sort(input,input+e, comp);
    
    int* parent =new int[v];
    for(int i=0 ;i <v ;i++)
    {
        parent[i]=i;
    }
    
    edge *output=new edge[v-1];
    int count=0;
    int i=0;
    while(count!=v-1)
    {
        edge currentEdge =input[i];
        
        int parent_s=findparent(parent,currentEdge.s);
        int parent_d=findparent(parent,currentEdge.d);
        
        if(parent_s != parent_d)
        {
            output[count]=currentEdge;
            count++;
            
            parent[parent_s]= parent_d;
        }
        i++;
        
    }
    //print
    for(int i=0 ; i< v-1 ;i++ )
    {
        if( output[i].s< output[i].d)
            cout<<output[i].s<<" "<< output[i].d<<" "<<output[i].w<< endl;
        else{
           cout<<output[i].d<<" "<< output[i].s<<" "<<output[i].w<< endl;

        }
    }
     delete [] output;

    delete [] parent;
}
int main()
{
    int V, E;
    cin >> V >> E;

    // input graph
    edge *input= new edge[E];
   for(int i= 0; i<E ;i++)
    {   int s,d,w;
        cin>>s>>d>>w;
        input[i]=edge(s,d,w);
    }
    
	
   kruskalMST(input,V,E);
    
     delete [] input;

    return 0;
}



***********************************************************************************************************************************************************************
***********************************************************************************************************************************************************************
***********************************************************************************************************************************************************************
***********************************************************************************************************************************************************************












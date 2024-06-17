/*
Undirected_Weighted_Graph

W nodes
M edges = [M can be any number]

A tree in which we have N nodes & N-1 edges & all nodes are reachable from each other
A graph can have many no. of spanning trees.
The Spanning tree having the minimum sum of edges is known as MST.


Two Methods:-
1. Prim's Algo
2. Djikstra's Algo [Disjoint Set]
*/

/*
Prim's Algo:-
1. Sum of MST
2. No. of edges or Which Tree.

Req:-
1. Vis
2. Pri_queue [min_heap] [wt, node, parent]
*/

class Solution
{
  public:
  int spanningTree(int V, vector<vector<int>> adj[])
  {
    //  O[E]
    priority_queue<pair<int,int>,
    vector<pair<int,int>>,greater<pair<int,int>>> pq;

    vector<int>vis(V,0);
    //{wt,node}
    pq.push({0,0});
    int sum=0;
    //E log E+ E log E
    //E log E
    while(!pq.empty()) {
      
      //log[pr_queue.size()]
      //log E
      auto it = pq.top();
      pq.pop();
      int node = it.second;
      int wt=it.first;

      if(vis[node]==1) continue;
      //add it to the MST
      vis[node] = 1;
      sum+=wt;
      // ElogE
      for(auto it: adj[node]){
        int adjNode = it[0];
        int edW = it[1];
        if(!vis[adjNode]) {
          pq.push({edW, adjNode});
        }
      }
        
    }
    return sum;
  }
};

/*Int:- You start with 0. And get it's adjacent nodes and takes minimum sum.
  Greedy
  */

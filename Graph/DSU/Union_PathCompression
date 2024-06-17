// Disjoint Set
//DFS/BFS O(N+E)

/*
Can do the same thing as BFS/DFS in constqant time.
For Dynamic Graph.
Union:
1. By Rank
2. By Size

findParent()
*/

/*
By Rank:
1. rank 
2. parent

Steps:-
1. Find ultimate parent of u & v  i.e., pu,pv.
2. Find Rank of ultimate parents [pu,pv].
3. Connect smaller rankk to larger rank always.

//Path Compression
is done to shorten the path as ultimate parent of each node.

But Rank does not gets reduced in Path Compression.

//Tc:
Union O(4 alpha) = constant
findPar() = constant

*/ 

class DisjointSet{
	vector<int> rank, parent;
public:
	DisjointSet(int n) {
		rank.resize(n+1, 0);
		parent.resize(n+1);
		for(int i=0;i<=n;i++){
			parent[i]= i;
		}
	}
	int findUPar(int node) {
		if(node == parent[node])
			return node;
		return parent[node] = findUPar(parent[node]);
	}
	void unionByRank(int u, int v){
		int ulp_u = findUPar(u);
		int ulp_v = findUPar(v);
		if(ulp_u == ulp_v) return;
		if(rank[ulp_u] = ulp_v;
			parent[ulp_u] = ulp_v;
		}
		else if (rank[ulp_v] < rank[ulp_u]) {
			parent[ulp_v]= ulp_u;
		}
		else {
			parent[ulp_v] = ulp_u;
			rank[ulp_u]++;
		}

	}
};

void solve(){
	DisjointSet ds(7);
	ds.unionByRank(1,2);
	ds.unionByRank(2,3);
	ds.unionByRank(4,5);
	ds.unionByRank(6,7);
	ds.unionByRank(5,6);
	// if 3 and 7 same or not
	if(ds.findUPar(3) == ds,findUPar(7)) {
		cout<< "Same"<< endl;
	}
	else cout<< "Not Same" <<endl;

	ds.unionByRank(3,7);

	if(ds.findUPar(3) == ds.findUPar(7)) {
		cout<< "Same" <<endl;
	}
	else cout<< "NotSame" <<endl;
	return 0;

//Cn be used in 0 based indexing as well as 1 based indexing

}




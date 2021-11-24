#include <bits/stdc++.h>
using namespace std;

class Graph
{
public:
	map<int, bool> visited;
	map<int, list<int>> adj;


	void addEdge(int v, int w);


	void DFS(int v);
	void printAllNodes(int v);
	void getNeighbourNodes(int v);
};

void Graph::addEdge(int v, int w)
{
	adj[v].push_back(w); 
}
void Graph::printAllNodes(int v){
    visited[v] = true;
	cout << v << " ";
}
void Graph::getNeighbourNodes(int v){
    list<int>::iterator i;
    for (i = adj[v].begin(); i != adj[v].end(); ++i)
		if (!visited[*i])
			DFS(*i);
}

void Graph::DFS(int v)
{
	
    printAllNodes(v);
    getNeighbourNodes(v);
	
}



int main()
{
	Graph g1;
	g1.addEdge(0, 1);
	g1.addEdge(0, 2);
	g1.addEdge(1, 2);
	g1.addEdge(2, 0);
	g1.addEdge(2, 3);
	g1.addEdge(3, 3);

	cout << "Depth First Traversal  (starting from vertex 2) \n";
	g1.DFS(2);

	return 0;
}
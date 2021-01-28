#include <bits/stdc++.h>

using namespace std;

//This implements the BFS algorithm
//This function takes the argument of the current node index
// adjacency list (stored in vector of vectors),
//and vector of boolean to keep track of which node has been visited

int  numOfVertices = 5;
vector<bool> visited(numOfVertices, false);
void DFS(int node, vector<int> graph[])
{

    //It checks wheather the node has been visited before
    if (visited[node])
        {
            return;
        }

        //cout<<node<<" visited " <<visited[node]<<" ss "<<endl;
    
        //set as visited to avoid visiting the same node twice
        visited[node] = true;

        //perform whatever action you want to play on that node
        cout << node << " ";

        //traverse to the adjacent node in the depth-first manner
        for (int i = 0; i < graph[node].size(); i++)
        {
            
            DFS(graph[node][i], graph);
        }
        
    
}

void addEdge(vector<int> adj[], int u, int v)
{
    adj[u].push_back(v);
    adj[v].push_back(u);
}

// This function is for printing the graph
void printGraph(vector<int> adj[], int numOfVertices)
{
    for (int u = 0; u < numOfVertices; u++)
    {
        cout << u;
        vector<int>::iterator it;
        for (it = adj[u].begin(); it != adj[u].end(); it++)
        {
            int v = *it;
            cout << "-->" << v;
        }

        cout << endl;
    }
}

int main()
{
    //int numOfVertices = 5;
    vector<int> *adj = new vector<int>[numOfVertices];
    addEdge(adj, 0, 1);
    addEdge(adj, 0, 2);
    addEdge(adj, 0, 4);
    addEdge(adj, 2, 3);
    addEdge(adj, 4, 3);
    addEdge(adj, 1, 2);

   


    //cout<<v;
    //cout<<*adj[3].begin();

    printGraph(adj, numOfVertices);

    DFS(2, adj);
}

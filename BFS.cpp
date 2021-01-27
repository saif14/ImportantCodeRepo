#include<bits/stdc++.h>

using namespace std;

//This implements the BFS algorithm
void BFS(vector<pair<int, int> > adj[], int source)
{
    queue <int> q ;

    //this indicates the level
    int level[20];
    //initilizing the level array with each element with a value less than one (negative numbers)
    //this indicates that particular node is unvisited
    fill_n(level, 20, -1);
    //initializing the source distance to ZERO
    level[source] = 0;
    //pushing the source into the queue
    q.push(source);
    
    while (!q.empty())
    {
        int v;
        int u = q.front();
        q.pop();
        vector<pair<int, int> > :: iterator it;
        //this loop finds out All the adjacent nodes 
        for(it = adj[u].begin(); it!=adj[u].end();it++)
       {
           //Following line brings the adjacent node at hand 
           v = it->first;
           if(level[v]<0)
           {
               level[v] = level[u] + 1;
               
               q.push(v);
           }
       }
       cout<<endl;


    }

    //printing out the shortest path from the source
    for (int i=0; i<=4; i++)
    {
        cout<<"Distance of: "<<i<<" = "<<level[i];
        cout<<"\n";
    }
    

}

//this function is for adding the edges
void addEdge(vector<pair<int,int> > adj[], int source, int dest, int wieght)
{
    adj[source].push_back(make_pair(dest, wieght));

    //add the below line for both way graph. Unidirectional graph doesn't need it.
    adj[dest].push_back(make_pair(source, wieght));

}

//This function is for printing the graph
void printGraph(vector<pair<int, int> > adj[], int numOfVertices)
{
    int v, weight;
    for(int u=0; u<numOfVertices; u++)
    {
        float f=15.0;
        cout<<u << " <--- ";
        //iterator for iterating the list
        vector<pair<int, int> > :: iterator it;
       for(it = adj[u].begin(); it!=adj[u].end();it++)
       {
           v = it->first;
           weight = it->second;
           cout<<"("<<weight<<")"<<" ---> "<<v<<" --- ";

       }
        cout<<endl;
    }
    
}




int main()
{
    int numOfVertices = 5;
    vector< pair<int,int> > adj[numOfVertices];
    addEdge(adj, 0, 1, 1);
    addEdge(adj, 0, 2, 1);
    addEdge(adj, 0, 4, 1);
    addEdge(adj, 2, 3, 1);
    addEdge(adj, 4, 3, 1);
    addEdge(adj, 1, 2, 1);
    
    //printGraph(adj, numOfVertices);

    BFS(adj,4);



}

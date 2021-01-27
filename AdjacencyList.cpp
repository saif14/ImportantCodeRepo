#include<bits/stdc++.h>

using namespace std;

void addEdge(vector<pair<int,int> > adj[], int source, int dest, int wieght)
{
    adj[source].push_back(make_pair(dest, wieght));

    //add the below line for both way graph. Unidirectional graph doesn't need it.
    adj[dest].push_back(make_pair(source, wieght));

}

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
    addEdge(adj, 0, 1, 10);
    addEdge(adj, 0, 2, 20);
    addEdge(adj, 0, 4, 30);
    addEdge(adj, 2, 3, 50);
    addEdge(adj, 4, 3, 40);
    addEdge(adj, 1, 2, 60);
    printGraph(adj, numOfVertices);

}
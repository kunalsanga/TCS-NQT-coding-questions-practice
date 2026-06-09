#include<bits/stdc++.h>
using namespace std;

int main(){

    int n,m;
    cin>>n>>m;

    vector<pair<int,int>> adj[n+1];

    for(int i=0;i<m;i++){

        int u,v,w;
        cin>>u>>v>>w;

        adj[u].push_back({v,w});
        adj[v].push_back({u,w});
    }

    int src,dest;
    cin>>src>>dest;

    vector<int> dist(n+1,INT_MAX);

    priority_queue<
        pair<int,int>,
        vector<pair<int,int>>,
        greater<pair<int,int>>
    > pq;

    dist[src]=0;

    pq.push({0,src});

    while(!pq.empty()){

        int d = pq.top().first;
        int node = pq.top().second;

        pq.pop();

        for(auto it : adj[node]){

            int next = it.first;
            int wt = it.second;

            if(d + wt < dist[next]){

                dist[next] = d + wt;

                pq.push({dist[next],next});
            }
        }
    }

    cout<<"Shortest Distance = "<<dist[dest];

    return 0;
}
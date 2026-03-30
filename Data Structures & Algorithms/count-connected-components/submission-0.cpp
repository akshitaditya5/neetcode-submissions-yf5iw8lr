class Solution {
public:

void bfs(vector<int>&visited,int node,
vector<vector<int>>adj){
    visited[node]=1;
    queue<int> q;
    q.push(node);
    while(!q.empty()){
        int f=q.front();
        q.pop();
        for(int nbr:adj[f]){
            if(!visited[nbr]){
                visited[nbr]=1;
                q.push(nbr);
            }
        }
    }
}


    int countComponents(int n, vector<vector<int>>& edges) {
        vector<vector<int>>adj(n);
        for(const auto&edge:edges){
            int a=edge[0];
            int b=edge[1];
            adj[a].push_back(b);
            adj[b].push_back(a);
        }
    //    for(int i=0;i<n;i++){
    //     int a=edges[i][0];
    //     int b=edges[i][1];
    //     adj[a].push_back(b);
    //     adj[b].push_back(a);
    //    }
       vector<int> visited(n,0);
       int count=0;
       for(int i=0;i<n;i++){
        if(!visited[i]){
            count++;
            bfs(visited,i,adj);
        }
       }
       return count;
    }
};

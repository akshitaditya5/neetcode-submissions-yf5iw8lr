class Solution {
public:
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        int n=numCourses;

        vector<vector<int>> adj(n);
        vector<int> indegree(n,0);
        queue<int> q;
        vector<int> ans;

        for(auto &x:prerequisites){
            int a=x[0];
            int b=x[1];
            adj[b].push_back(a);
        }

        for(int i=0;i<n;i++){
            for(int &x:adj[i]){
                indegree[x]++;
            }
        }

        for(int i=0;i<n;i++){
            if(indegree[i]==0){
                q.push(i);
            }
        }

        while(!q.empty()){
            int f=q.front();
            q.pop();
            ans.push_back(f);
            for(int nbr:adj[f]){
                indegree[nbr]--;
                if(indegree[nbr]==0){
                    q.push(nbr);
                }
            }
        }

        if(ans.size()==n){
            return ans;
        } else {
            return {};
        }





    }
};

class Solution {
public:
int dx[4]={-1,0,1,0};
int dy[4]={0,-1,0,1};
    int orangesRotting(vector<vector<int>>& grid) {
        int ans=0;
        queue<pair<int,int>> q;

        int n=grid.size();
        int m=grid[0].size();

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==2){
                    q.push({i,j});
                }
            }
        }

        while(!q.empty()){
            int sz=q.size();
            int temp=0;

            while(sz--){
                auto pq=q.front();
                q.pop();

                int ii=pq.first;
                int jj=pq.second;

                for(int k=0;k<4;k++){
                    int row=ii+dx[k];
                    int column=jj+dy[k];

                    if(row>=0 && row<n && column>=0 && column<m
                    && grid[row][column]==1){
                        grid[row][column]=2;
                        temp=1;
                        q.push({row,column});
                    }
                }
            }
            ans=ans+temp;
        }
for(auto &v:grid){
    for(auto &x:v){
        if(x==1){
            return -1;
        }
    }
}
return ans;

    }
};

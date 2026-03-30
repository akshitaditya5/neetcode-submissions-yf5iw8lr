class Solution {
public:

int bfs(int row,int column,vector<vector<int>>&grid,
vector<vector<int>>&visited){
visited[row][column]=1;
queue<pair<int,int>>q;
q.push({row,column});
int n=grid.size();
int m=grid[0].size();
int area=1;
while(!q.empty()){
    int first=q.front().first;
    int second=q.front().second;
    q.pop();

for(int delRow=-1;delRow<=1;delRow++){
    for(int delCol=-1;delCol<=1;delCol++){
        if(abs(delRow)+abs(delCol)!=1){
            continue;
    }
    int newRow=delRow+first;
    int newCol=delCol+second;
    if(newRow>=0 && newRow<n
    && newCol>=0 && newCol<m
    && !visited[newRow][newCol]
    && grid[newRow][newCol]==1){
        visited[newRow][newCol]=1;
        q.push({newRow,newCol});
        area++;
    }
    }
}
}
return area;
}


    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        vector<vector<int>> visited(n,vector<int>(m,0));
        int maxArea=0;
        for(int row=0;row<n;row++){
            for(int column=0;column<m;column++){
                if(!visited[row][column] && grid[row][column]==1){
                   int k= bfs(row,column,grid,visited);
                   maxArea=max(maxArea,k);
                }
            }
        }
        return maxArea;
    }
};

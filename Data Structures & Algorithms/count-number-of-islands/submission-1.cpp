class Solution {
public:

void bfs(int row,int col,vector<vector<int>>&visited,
vector<vector<char>>grid){

visited[row][col]=1;
queue<pair<int,int>> q;
q.push({row,col});

int n=grid.size();
int m=grid[0].size();

while(!q.empty()){
 int first=q.front().first;
 int second=q.front().second;
 q.pop();

 for(int delRow=-1;delRow<=1;delRow++){
    for(int delCol=-1;delCol<=1;delCol++){
        if (abs(delRow) + abs(delCol) != 1) continue; //stop diagonally
        int nRow=first+delRow;
        int nCol=second+delCol;
        if(nRow>=0 && nRow<n && nCol>=0 && nCol<m && 
        !visited[nRow][nCol] && grid[nRow][nCol]=='1'){
visited[nRow][nCol]=1;
q.push({nRow,nCol});
        }
    }
 }
 
}
}




    int numIslands(vector<vector<char>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        vector<vector<int>> visited(n,vector<int>(m,0));
        int count=0;
        for(int row=0;row<n;row++){
            for(int col=0;col<m;col++){
                if(!visited[row][col] && grid[row][col]=='1'){
                    count++;
                    bfs(row,col,visited,grid);
                }
            }
        }
        return count;
    }
};

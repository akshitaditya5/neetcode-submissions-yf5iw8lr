class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        priority_queue<pair<int,pair<int,int>>> maxh;
        vector<vector<int>> result;
        for(int i=0;i<points.size();i++){
            int distance = points[i][0]*points[i][0]+
            points[i][1]*points[i][1];
            maxh.push({distance,{points[i][0],points[i][1]}});
            while(maxh.size()>k){
                maxh.pop();
            }
        }
        while(maxh.size()>0){
            pair<int,int> p = {maxh.top().second};
            result.push_back({p.first,p.second});
            maxh.pop();
        }
        return result;
    }
};

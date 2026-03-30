class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        // priority_queue<int,vector<int>,greater<int>> minh;
        priority_queue<int> maxh;
        for(int i=0;i<stones.size();i++){
            maxh.push(stones[i]);
        }
        int final=0;
        while(maxh.size()>0){
            if(maxh.size()==1){
                final=maxh.top();
                maxh.pop();
                break;
            }
            int first=maxh.top();
            maxh.pop();
            int second=maxh.top();
            maxh.pop();
            if(first!=second){
                int kk=abs(first-second);
                maxh.push(kk);
            }
            else if(first==second){
                maxh.push(0);
            }

        }
        return final;
    }
};

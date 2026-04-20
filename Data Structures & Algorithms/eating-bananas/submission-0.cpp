class Solution {
public:
int maxValue(vector<int>&arr){
    int ans=0;
    for(int i=0;i<arr.size();i++){
        ans=max(ans,arr[i]);
    }
    return ans;
}

int calculateTotalHours(vector<int>&arr,int hourly){
    int totalHours=0;
    for(int i=0;i<arr.size();i++){
        totalHours=totalHours+ceil((double)arr[i]/(double)hourly);
    }
    return totalHours;
}

    int minEatingSpeed(vector<int>& piles, int h) {
        int low=1;
        int high=maxValue(piles);
        while(low<=high){
            int mid=low+(high-low)/2;
            int totalHours=calculateTotalHours(piles,mid);
            if(totalHours<=h){
                high=mid-1;
            } else {
                low=mid+1;
            }
        }
        return low;
    }
};

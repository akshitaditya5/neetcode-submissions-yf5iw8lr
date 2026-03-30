class Solution {
public:

    int recursion(int n,vector<int>&arr){
        if(n<=0){
            return 1;
        }
        if(n==1){
            return 1;
        }
        if(arr[n]!=-1){
            return arr[n];
        }
        arr[n]=recursion(n-1,arr)+recursion(n-2,arr);
        return arr[n];
    }

    int climbStairs(int n) {
        vector<int>arr(n+1,-1);
       return recursion(n,arr);
    }
};

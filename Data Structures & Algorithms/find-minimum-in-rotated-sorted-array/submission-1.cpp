class Solution {
public:
    int findMin(vector<int>& nums) {
        int start = 0;
        int end = nums.size() - 1;

        while (start < end) {
            int mid = start + (end - start) / 2;
            // Compare mid element with the end element
            if (nums[mid] > nums[end]) {
                // The smallest value must be to the right of mid
                start = mid + 1;
            } else {
                // The smallest value is at mid or to the left of mid
                end = mid;
            }
        }
        // At the end of the loop, start == end points to the smallest element
        return nums[start];
    }
};

class Solution {
public:
// Rule of thumb: whenever you use ceil for division in competitive programming, always prefer (a + b - 1) / b over floating point — it's exact, faster, and never has precision issues.

    int largestElement(vector<int>& arr) {
        int ans = 0;
        for (int i = 0; i < arr.size(); i++)
            ans = max(ans, arr[i]);
        return ans;
    }

    long long totalEatingHours(vector<int>& arr, int hourly) {
        long long totalHours = 0;
        for (int i = 0; i < arr.size(); i++)
            totalHours += ((long long)arr[i] + hourly - 1) / hourly; // ✓ no floating point
        return totalHours;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1;
        int high = largestElement(piles);
        while (low <= high) {
            int mid = low + (high - low) / 2;
            long long totalHours = totalEatingHours(piles, mid);
            if (totalHours <= h)
                high = mid - 1;
            else
                low = mid + 1;
        }
        return low;
    }
};
class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        int n=position.size();

        // Pair positions with speeds, then sort by position descending
        // (process closest to target first)

        vector<pair<int,int>> cars(n); //putting n here is very very important

        for(int i=0;i<n;i++){
            cars[i]={position[i],speed[i]};
        }

        sort(cars.begin(),cars.end(),greater<pair<int,int>>());

        // For pairs, lexicographical order compares first then second, so:
        // (a.first, a.second) > (b.first, b.second) if
        // a.first > b.first, or
        // a.first == b.first and a.second > b.second.

        stack<double> st; // stores time for each car/fleet to reach target

        for(auto &[pos,spd]:cars){
            double time=(double)(target-pos)/spd;

            // Only forms a new fleet if it's strictly slower than the fleet ahead
            if(st.empty()||time>st.top()){
                st.push(time);
            // else: this car catches up → merges into the fleet ahead, discard
            }
        }
        return st.size();
    }
};

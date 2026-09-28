class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> s(nums.begin(),nums.end());
        int ans = 0;
        for(auto x : s) {
            if(s.find(x-1)==s.end()) {
                int current = x;
                int cnt  = 1;
                while(s.find(current+1)!=s.end()) {
                    current++;
                    cnt++;
                }
                ans = max(ans , cnt);
            }
        }

        return ans;
    }
};
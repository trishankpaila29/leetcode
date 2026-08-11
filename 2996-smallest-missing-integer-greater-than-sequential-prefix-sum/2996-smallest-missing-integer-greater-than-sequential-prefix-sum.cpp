class Solution {
public:
    int missingInteger(vector<int>& nums) {
        int n = nums.size();
        int maxcnt = 1;
        int sum = nums[0];
        int cnt = 1;
        int maxsum = nums[0];
        for (int i = 0; i < n - 1; i++) {
            if (nums[i] == nums[i + 1] - 1) {
                cnt++;
                sum = sum + nums[i + 1];
                if (maxcnt < cnt) {
                    maxcnt = cnt;
                    maxsum = sum;
                }
            } else {
                break;
            }
        }
        unordered_set<int> st(nums.begin(), nums.end());

        while (st.count(maxsum)) {
            maxsum++;
        }
        return maxsum;
    }
};
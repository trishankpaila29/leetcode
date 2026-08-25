class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int x = 1;
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            if (nums[i] == x * k) {
                x++;
            }
        }
        return x*k;
    }
};
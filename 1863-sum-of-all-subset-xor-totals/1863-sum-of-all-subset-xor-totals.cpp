class Solution {
public:
    int solve(vector<int>& nums, int i, int xr) {
        if (i == nums.size())
            return xr;

        return solve(nums, i + 1, xr ^ nums[i])
             + solve(nums, i + 1, xr);
    }

    int subsetXORSum(vector<int>& nums) {
        return solve(nums, 0, 0);
    }
};
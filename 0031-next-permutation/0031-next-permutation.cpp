class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int x = -1;
        int t = 0;
        int n = nums.size();
        for (int i = n - 2; i >= 0; i--) {
            if (nums[i] < nums[i + 1]) {
                x = nums[i];
                t = i;
                break;
            }
        }
        if (x == -1) {
            reverse(nums.begin(), nums.end());
        } else {
            for (int j = n - 1; j > t; j--) {
                if (nums[j] > nums[t]) {
                    swap(nums[j], nums[t]);
                    break;
                }
            }
            reverse(nums.begin() + t + 1, nums.end());
        }
    }
};
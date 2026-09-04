class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int mini = INT_MAX;
        int ans = 0;
        for (int i = 0; i < nums.size(); i++) {
            int a = *max_element(nums.begin(), nums.begin() + i + 1);
            int b = *min_element(nums.begin() + i, nums.end());
            int x = a - b;
            if(x<=k) {
                return i;
            }
        }
        return -1;
    }
};
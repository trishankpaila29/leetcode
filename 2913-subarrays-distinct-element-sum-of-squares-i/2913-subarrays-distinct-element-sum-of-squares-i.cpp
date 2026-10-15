class Solution {
public:
    int sumCounts(vector<int>& nums) {
        long long x = 0;
        int n = nums.size();
        for(int i=0;i<n;i++) {
            set<int> v;
            for(int j = i;j<n;j++) {
                v.insert(nums[j]);
                int y = v.size();
                x += y*y;
            }
        }
        return x;
    }
};
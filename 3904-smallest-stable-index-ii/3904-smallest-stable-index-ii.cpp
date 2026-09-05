class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int maxi = nums[0];
        int n = nums.size();
        vector<int> v(n);
        v[n-1] = nums[n-1];
        for(int i=n-2;i>=0;i--) {
            v[i] = min(nums[i],v[i+1]);
        }
        for(int i = 0;i<n;i++) {
            if(nums[i]>=maxi) {
                maxi = nums[i];
            }
            int x = maxi - v[i];
            if(x<=k) {
                return i;
            }
        }
        return -1;
    }
};
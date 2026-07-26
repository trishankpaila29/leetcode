class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int n = nums.size();
        vector<int> v;
        sort(nums.begin(),nums.end());
        int maxi = nums[n-1]*nums[n-2]*nums[n-3];
        for(int i=0;i<n;i++) {
            if(nums[i]<0) {
                v.push_back(nums[i]);
            }
        }
        if(v.size()>=2) {
            return max(maxi,v[0]*v[1]*nums[n-1]);
        }
        return maxi;

    }
};
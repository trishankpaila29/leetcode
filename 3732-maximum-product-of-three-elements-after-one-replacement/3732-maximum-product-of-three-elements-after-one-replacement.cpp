class Solution {
public:
    long long maxProduct(vector<int>& nums) {
        long long x = 100000;
        int n = nums.size();
        sort(nums.begin(),nums.end());
        long long a = nums[0];
        long long d = nums[1];
        long long b = nums[n-1];
        long long c = nums[n-2];
        return max({a*d*x,b*a*(-x),c*b*x});
    }
};
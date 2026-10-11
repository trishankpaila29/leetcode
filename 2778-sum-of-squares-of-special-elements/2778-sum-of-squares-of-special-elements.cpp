class Solution {
public:
    int sumOfSquares(vector<int>& nums) {
        int n = nums.size();
        long long x = 0;
        for(int i=0;i<n;i++) {
            if(n%(i+1)==0) {
                x += nums[i]*nums[i];
            }
        }
        return x;
    }
};
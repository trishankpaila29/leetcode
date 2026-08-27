class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        map<int,int> v;
        int  n =nums.size();
        int sum = 0;
        int cnt = 0;
        v[0] = 1;
        for(int i=0;i<n;i++) {
            sum += nums[i];
            int rem = sum-k;
            if(v.find(rem)!=v.end()) {
                cnt += v[rem];
            }
            v[sum] += 1;
        }
        return cnt;
    }
};
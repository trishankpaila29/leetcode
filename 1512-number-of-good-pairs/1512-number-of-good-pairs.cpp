class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int n = nums.size();
        map<int ,int> mp;
        for(int i=0;i<n;i++) {
            mp[nums[i]]++;
        }
        int sum = 0;
        for(auto x : mp) {
            int t = x.second;
            sum = sum + t*(t-1)/2;
        }
        return sum;
    }
};
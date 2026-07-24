class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int,int> mp;
        for(auto it : nums) {
            mp[it]++;
        }
        for(auto x : mp) {
            if(x.second>nums.size()/2) {
                return x.first;
            }
        }
        return 0;
    }
};
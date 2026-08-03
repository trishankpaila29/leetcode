class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
       int n = nums.size();
       map<int ,int> mp;
       vector<int> v;
       for(int i=0;i<n;i++) {
        mp[nums[i]]++;
       }
       for(auto x : mp) {
        if(x.second==2) {
            v.push_back(x.first);
        }
       }
       return v;
    } 
};
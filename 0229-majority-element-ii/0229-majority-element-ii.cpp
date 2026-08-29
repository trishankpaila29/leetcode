class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int,int> mp;
        vector<int> v;
        int n = nums.size();
        int mini = (int)(n/3) + 1;
        for(int i=0;i<n;i++) {
            mp[nums[i]]++;
            if(mp[nums[i]]==mini) {
                v.push_back(nums[i]);
            }
            if(v.size()==2) {
                break;
            }
        }
        return v;
    }
};
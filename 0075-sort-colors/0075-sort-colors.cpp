class Solution {
public:
    void sortColors(vector<int>& nums) {
        int cnt1=0,cnt2=0,cnt3=0;
        vector<int> v;
        for(int i=0;i<nums.size();i++) {
            if(nums[i]==0) {
                cnt1++;
            }
            else if(nums[i]==1) {
                cnt2++;
            }
            else {
                cnt3++;
            }
        }
        for(int i=0;i<cnt1;i++) {
            v.push_back(0);
        }
        for(int i=0;i<cnt2;i++) {
            v.push_back(1);
        }
        for(int i=0;i<cnt3;i++) {
            v.push_back(2);
        }
        for(int i=0;i<nums.size();i++) {
            nums[i]=v[i];
        }
    }
};
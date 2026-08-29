class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int  cnt1 = 0;
        int x = (int)(nums.size()/3);
        int n = nums.size();
        int cnt2 = 0;
        int l1 = INT_MIN;
        int l2 = INT_MIN;
        for(int i=0;i<n;i++) {
            if(cnt1==0 && l2!=nums[i]) {
                l1 = nums[i];
                cnt1 = 1;
            }
            else if(cnt2==0 && l1!=nums[i]) {
                l2 = nums[i];
                cnt2 = 1;
            }
            else if(l1==nums[i]) {
                cnt1++;
            }
            else if(l2==nums[i]) {
                cnt2++;
            }
            else {
                cnt1--;
                cnt2--;
            }
        }
        vector<int> v;
        cnt1=0;
        cnt2 = 0;
        for(int i=0;i<n;i++) {
            if(nums[i]==l1) {
                cnt1++;
            }
            if(nums[i]==l2) {
                cnt2++;
            }
        }
        if(cnt1>x) {
            v.push_back(l1);
        }
        if(cnt2>x) {
            v.push_back(l2);
        }
        return v;
    }
};
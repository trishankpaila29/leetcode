class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n = nums.size();
        vector<vector<int>> v;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++) {
            if(i>0 && nums[i]==nums[i-1]) continue;
            for(int j=i+1;j<n;j++) {
                if(j!=(i+1) && nums[j]==nums[j-1]) continue;
                int k = j+1;
                int l = n-1;
                while(k<l) {
                    long long sumi = nums[i];
                    sumi += nums[j];
                    sumi += nums[k];
                    sumi += nums[l];
                    if(sumi==target) {
                        vector<int> temp = {nums[i],nums[j],nums[k],nums[l]};
                        v.push_back(temp);
                        l--,k++;
                        while(nums[k]==nums[k-1] && k<l) k++;
                        while(nums[l]==nums[l+1] && k<l) l--;
                    }
                    else if(sumi>target) {
                        l--;
                    }
                    else {
                        k++;
                    }
                }
            }
        }
        return v;
    }
};
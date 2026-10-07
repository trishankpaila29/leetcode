class Solution {
    int upperBound(vector<int>& v,int x,int n) {
        int left = 0;
        int ans = n;
        int right = n-1;
        while(left<=right) {
            int mid = (left + right)/2;
            if(v[mid]>x) {
                ans = mid;
                right = mid - 1;
            }
            else {
                left = mid + 1;
            }
        }
        return ans;
    }
    int lowerBound(vector<int>& v,int x,int n) {
        int left = 0;
        int ans = n;
        int right = n-1;
        while(left<=right) {
            int mid = (left + right)/2;
            if(v[mid]>=x) {
                ans = mid;
                right = mid - 1;
            }
            else {
                left = mid + 1;
            }
        }
        return ans;
    }
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int lb = lowerBound(nums,target,nums.size());
        if(lb==nums.size() || nums[lb]!=target) return {-1,-1};
        return {lb,upperBound(nums,target,nums.size())-1};
    }
};
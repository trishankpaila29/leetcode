class Solution {
    int f(vector<int>& v,int target) {
        int ans = v.size();
        int left = 0;
        int right = v.size()-1;
        while(left<=right) {
            int mid = (left + right)/2;
            if(v[mid]>=target) {
                ans = mid;
                right = mid -1;
            }
            else {
                left = mid + 1;
            }
        }
        return ans;
    }
public:
    int searchInsert(vector<int>& nums, int target) {
        return f(nums,target);
    }
};
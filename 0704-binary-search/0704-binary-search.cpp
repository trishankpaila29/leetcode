class Solution {
    int f(vector<int>& v,int left,int right ,int target) {
        if(left>right) return -1;
        int mid = (right + left)/2;
        if(v[mid]==target) return mid;
        else if(v[mid]>target) {
            return f(v,left,mid-1,target);
        }
        else {
            return f(v,mid+1,right,target);
        }
    }
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        
        return f(nums,0,n-1,target);

    }
};
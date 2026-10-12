class Solution {
    int f(vector<int>& v,int n) {
        int low = 0;
        int high = n-1;
        int mini = INT_MAX;
        while(low<=high) {
            int mid = (low + high)/2;
            if(v[low]<=v[mid]) {
                mini = min(mini,v[low]);
                low = mid + 1;
            }
            else {
                mini = min(mini,v[mid]);
                high = mid -1;
            }
        }
        return mini;
    }
public:
    int findMin(vector<int>& nums) {
        return f(nums,nums.size());
    }
};
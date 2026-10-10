class Solution {
    int f(vector<int>& v,int target) {
        int n = v.size();
        int low = 0;
        int high = n - 1;
        while(low<=high) {
            int mid = (low + high)/2;
            if(v[mid]==target) return true;
            
            if(v[low]==v[mid] && v[mid]==v[high]) {
                low++;
                high--;
                continue;
            }
            if(v[low]<=v[mid]) {
                if(v[low]<=target && v[mid]>=target) {
                    high = mid - 1;
                }
                else {
                    low = mid + 1;
                }
            }
            else {
                if(v[mid]<=target && v[high]>=target) {
                    low = mid + 1;
                }
                else {
                    high = mid - 1;
                }
            }
        }
        return false;
    }
public:
    bool search(vector<int>& nums, int target) {
        return f(nums,target);
    }
};
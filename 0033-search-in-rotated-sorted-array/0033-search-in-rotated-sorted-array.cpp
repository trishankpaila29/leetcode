class Solution {
    int f(vector<int>& v,int x) {
        int low = 0;
        int high = v.size() - 1;
        while(low<=high) {
            int mid = (high + low)/2;
            if(v[mid] == x) return mid;

            if(v[low]<=v[mid]) {
                if(v[low]<=x && v[mid]>=x) {
                    high = mid - 1;
                } 
                else {
                    low = mid + 1;
                }
            }
            else {
                if(v[mid]<=x && v[high]>=x) {
                    low = mid + 1;
                } 
                else {
                    high = mid - 1;
                }
            }
        }
        return -1;
    }
public:
    int search(vector<int>& nums, int target) {
        return f(nums,target);
    }
};
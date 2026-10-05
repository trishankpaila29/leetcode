class Solution {
    int f(vector<int>& v,int target) {
        int left = 0;
        int right = v.size()-1;
        while(left<=right) {
            int mid = (right + left)/2;
            if(v[mid] == target) return mid;
            else if(v[mid]>target) {
                right = mid -1;
            }
            else {
                left = mid + 1;
            }
        }
        return -1;
    }
public:
    int search(vector<int>& nums, int target) {
        return f(nums , target);
    }
};
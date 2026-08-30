class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n = nums.size();
        int maxi = INT_MIN;
        int mini= INT_MAX;
        int x = 0;
        int y = 0;
        for(int i=0;i<n;i++) {
            if(mini>nums[i]) {
                x = i;
                mini = nums[i];
            }
            if(maxi<nums[i]) {
                y = i;
                maxi = nums[i];
            }
        }
        int a = 0;
        int b = 0;
        int c = 0;
        if(x>y) {
            a = x+1;
            b = n-y;
            c = n-x + y+1;
        }
        else {
            a = y+1;
            b = n-x;
            c= n-y+x+1;
        }

        return min({a,b,c});
    }
};
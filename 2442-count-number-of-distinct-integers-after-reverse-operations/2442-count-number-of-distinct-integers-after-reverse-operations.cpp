class Solution {
public:
    int countDistinctIntegers(vector<int>& nums) {
        int n = nums.size();
        set<int> v;
       for(int i=0;i<n;i++) {
        int digit = 0;
        int a = nums[i];
        while(a>0) {
            int t = a%10;
            digit = digit*10 + t;
            a =a/10;
        }
        v.insert(digit);
       }
       for(auto x : nums) {
        v.insert(x);
       }
       return v.size(); 
    }
};
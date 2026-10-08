class Solution {
public:
    double minimumAverage(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        // vector<float> v;
        float mini = INT_MAX;
        int n = nums.size();
        for(int i=0;i<n/2;i++) {
            int t = nums[i] + nums[n-i-1];
            float x = float(t)/2;
            // v.push_back(x);
            mini = min(mini,x);
            // v.erase(v.begin() + i);
            // v.erase(v.begin() + n - i - 1);
        }
        // float a = *min_element(v.begin(),v.end());
        return mini;
    }
};
class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n = nums.size();
        int a = 0;
        int b = -1;
        vector<int> x;
        vector<int> v(n+1);
        for(int i=0;i<n;i++) {
            v[nums[i]]++;
        }
        for(int i=1;i<=n;i++) {
            if(v[i]==2) {
                a = i;
            }
            else if(v[i]==0) {
                b = i;
            }
        }
        x.push_back(a);
        if(b!=-1) {
            x.push_back(b);
        }
        if(x.size()==1) {
            x.push_back(n);
            return x;
        }
        return x; 
    }
};
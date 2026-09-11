class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        int n = intervals.size();
        sort(intervals.begin(),intervals.end());
        vector<vector<int>> v;
        for(int i=0;i<n;i++) {
            if(v.empty() || v.back()[1]<intervals[i][0]) {
                v.push_back({intervals[i][0],intervals[i][1]});
            }
            else {
                v.back()[1] = max(v.back()[1],intervals[i][1]);
            }
        }
        return v; 
    }
};
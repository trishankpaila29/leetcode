class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
       int n = intervals.size();
       sort(intervals.begin(),intervals.end());
       vector<vector<int>> v;
       for(int i=0;i<n;i++) {
        int start = intervals[i][0];
        int back = intervals[i][1];
        if(!v.empty() && v.back()[1]>=back) {
            continue;
        }
        for(int j = i+1;j<n;j++) {
            if(intervals[j][0]<=back) {
                back = max(back,intervals[j][1]);
            }
            else {
                break;
            }
        }
        v.push_back({start,back});
       } 
       return v;
    }
};
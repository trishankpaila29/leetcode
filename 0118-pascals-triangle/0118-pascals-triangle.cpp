class Solution {
public:
vector<int> pascal(int row) {
    long long ans = 1;
    vector<int> v;
    v.push_back(1);
    for(int i=1;i<row;i++) {
        ans = ans*(row-i);
        ans = ans/(i);
        v.push_back(ans);
    }
    return v;
}
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> s;
        for(int i=1;i<=numRows;i++) {
            s.push_back(pascal(i));
        }
        return s;
    }
};
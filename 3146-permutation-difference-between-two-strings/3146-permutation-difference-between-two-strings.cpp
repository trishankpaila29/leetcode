class Solution {
public:
    int findPermutationDifference(string s, string t) {
        int n = s.size();
        int sum = 0;
        map<char,int> mp1;
        map<char,int> mp2;
        for(int i=0;i<n;i++) {
            mp1[s[i]] = i;
            mp2[t[i]] = i;
        }
        for(int i=0;i<n;i++) {
            sum += abs(mp1[s[i]] - mp2[s[i]]);
        }
        return sum;
    }
};
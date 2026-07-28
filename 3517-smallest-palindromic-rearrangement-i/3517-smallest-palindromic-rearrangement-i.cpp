class Solution {
public:
    string smallestPalindrome(string s) {
     int n = s.size()/2;
     int x = s.size();
     string t;
     for(int i=0;i<n;i++) {
        t.push_back(s[i]);
     }
     sort(t.begin(),t.end());
     for(int i = 0;i<n;i++) {
        s[i] = t[i];
        s[x-1-i] = t[i];
     }
     return s;
     }
};
class Solution {
public:
    string largestOddNumber(string num) {
        int n = num.size();
        int x = -1;
        string t;
        for(int i=n-1;i>=0;i--) {
            int o = num[i];
            if(o%2!=0) {
                x = i;
                break;
            }
        }
        for(int i=0;i<=x;i++) {
            t.push_back(num[i]);
        }
        return t;
    }
};
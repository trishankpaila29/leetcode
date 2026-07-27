class Solution {
public:
    int minOperations(int n) {
        int t = n/2;
        int cnt=0;
        for(int i=0;i<t;i++) {
            cnt = cnt + (n - (2*i+1)); 
        }
        return cnt;
    }
};
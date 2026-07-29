class Solution {
public:
    int totalMoney(int n) {
        int t = n/2+1;
        int cnt =0;
        int sum =0;
        for(int i=1;i<=t;i++) {
            for(int j=i;j<7+i;j++) {
                sum = sum + j;
                cnt++;
                if(cnt ==n) {
                    return sum;
                }
            }
        }
        return 0;
    }
};
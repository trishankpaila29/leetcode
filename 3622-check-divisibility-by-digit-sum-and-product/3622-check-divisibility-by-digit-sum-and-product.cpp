class Solution {
public:
    bool checkDivisibility(int n) {
        int t = n;
        int sum = 0;
        int product = 1;
        while(t>0) {
            sum = sum + t%10;
            product = product*(t%10);
            t = t/10;
        }
        if(n%(sum + product)==0) {
            return 1;
        }
        return 0;
    }
};
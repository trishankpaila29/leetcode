class Solution {
public:
    int smallestNumber(int n, int t) {
        for(int i=n;;i++) {
            int x = i;
            int digit = 1;
            while(x>0) {
                digit = digit*(x%10);
                x = x/10;
            }
            if(digit%t==0) {
                return i;
            }
        }
        return -1;
    }
};
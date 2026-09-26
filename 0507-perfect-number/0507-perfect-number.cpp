class Solution {
public:
    bool checkPerfectNumber(int num) {
        int x = 1;
        int sum = 0;
        while(x<num) {
            if(num%x==0) {
                sum += x;
            }
            x++;
        }
        if(sum==num) {
            return true;
        }
        else {
            return false;
        }
    }
};
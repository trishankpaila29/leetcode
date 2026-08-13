class Solution {
public:
    int countEven(int num) {
        int x = num;
        int sum = 0;
        while(x>0) {
            sum += x%10;
            x = x/10;
        }
        if(sum%2==0) {
            if(num%2==0) {
                return num/2;
            }
            else {
                return num/2;
            }
        }
        else {
            if(num%2==0) {
                return num/2-1;
            }
            else {
                return num/2;
            }
        }
        return 0;
    }
};
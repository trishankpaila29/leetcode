class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        int cnt = 0;
        int sum = 0;
        int sumi = 0;
        int cnti = 0;
        for(int i=1;;i++) {
            if(i%2!=0) {
                if(cnt==n) {
                    break;
                }
                sum += i;
                cnt++;
            }
            else {
                sumi +=i;
            }
        }
        int a = gcd(sum ,sumi);
        return a;
    }
};
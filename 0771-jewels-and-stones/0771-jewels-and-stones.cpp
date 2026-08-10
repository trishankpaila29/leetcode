class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int n = stones.size();
        int x = jewels.size();
        int cnt = 0;
        int i =0;
        while(i<x) {
            for(int j=0;j<n;j++) {
                if(jewels[i]==stones[j]) {
                    cnt++;
                }
            }
            i++;
        }
        return cnt;
    }
};
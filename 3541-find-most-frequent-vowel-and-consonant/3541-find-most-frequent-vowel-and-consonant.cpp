class Solution {
public:
    int maxFreqSum(string s) {
        map<char,int> mp;
        for(auto x : s) {
            mp[x]++;
        }
        int normal = 0;
        int ovel = 0;
        for(auto it : mp) {
            if(it.first=='a' || it.first=='e' || it.first=='o' || it.first=='i' || it.first=='u') {
                ovel = max(ovel,it.second);
            }
            else {
                normal = max(normal , it.second);
            }
        }
        return normal + ovel;
    }
};
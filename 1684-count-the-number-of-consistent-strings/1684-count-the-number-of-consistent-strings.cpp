class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        set<char> st;
        for(int i=0;i<allowed.size();i++) {
            st.insert(allowed[i]);
        }
        int cnt = 0;
        for(int i=0;i<words.size();i++) {
            int x = words[i].size();
            for(int j = 0;j<x;j++) {
                if(st.find(words[i][j])==st.end()) {
                    cnt++;
                    break;
                }
            }
        }
        return words.size()-cnt;
    }
};
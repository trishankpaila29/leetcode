class Solution {
public:
    string interpret(string command) {
        string s;
        int n = command.size();
        for(int i=0;i<n;i++) {
            if(command[i]=='(' && command[i+1]==')') {
                s.push_back('o');
                i += 1;
            }
            else if(command[i]=='(' && command[i+1]!=')') {
                s.push_back('a');
                s.push_back('l');
                while(command[i]!=')') {
                    i++;
                }
            }
            else {
                s.push_back(command[i]);
            }
        }
        return s;
    }
};
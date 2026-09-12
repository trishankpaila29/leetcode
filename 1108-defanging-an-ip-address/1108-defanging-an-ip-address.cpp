class Solution {
public:
    string defangIPaddr(string address) {
        string c;
        int n = address.size();
        for(int i=0;i<n;i++) {
            if(address[i]=='.') {
                c.push_back('[');
                c.push_back('.');
                c.push_back(']');
            }
            else {
                c.push_back(address[i]);
            }
        }
        return c;
    }
};
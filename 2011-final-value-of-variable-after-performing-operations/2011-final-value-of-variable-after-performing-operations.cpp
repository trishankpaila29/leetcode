class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int i=0;
        int n = operations.size();
        int sum = 0;
        while(i<n) {
            if(operations[i]=="--X" || operations[i]=="X--") {
                sum +=-1;
            }
            else {
                sum +=1;
            }
            i++;
        }
        return sum;
    }
};
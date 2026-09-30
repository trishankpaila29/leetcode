class Solution {
    void s(vector<int> &v ,int low ,int mid ,int high) {
        vector<int> temp;
        int left = low;
        int right = mid+1;
        while(left<=mid && right<=high) {
            if(v[left]>=v[right]) {
                temp.push_back(v[right]);
                right++;
            }
            else {
                temp.push_back(v[left]);
                left++;
            }
        }
        while(left<=mid) {
            temp.push_back(v[left]);
            left++;
        }
        while(right<=high) {
            temp.push_back(v[right]);
            right++;
        }
        for(int i=low;i<=high;i++) {
            v[i] = temp[i-low];
        }
    }
    int countpairs(vector<int> &v ,int low ,int mid ,int high) {
        int right = mid + 1;
        int cnt = 0;
        for(int i=low;i<=mid;i++) {
            while(right<=high && v[i]>2LL * v[right]) right++;
            cnt += (right - (mid + 1));
        }
        return cnt;
    }
    int ms(vector<int> &v ,int low ,int high) {
        int cnt = 0;

        if(low>=high) return cnt;
        int mid = (low + high)/2;
        cnt += ms(v , low , mid);
        cnt += ms(v , mid + 1 ,high);
        cnt += countpairs(v ,low ,mid ,high);
        s(v ,low ,mid ,high);

        return cnt;
    }
public:
    int reversePairs(vector<int>& nums) {
        return ms(nums ,0 ,nums.size()-1);
    }
};
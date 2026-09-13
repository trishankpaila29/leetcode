class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int x1 = nums1.size();
        int a = m-1;
        int b = 0;
        // while(a>=0 && b<n) {
        //     if(nums1[a]>nums2[b]) {
        //         swap(nums1[a],nums2[b]);
        //         a--,b++;
        //     }
        //     else {
        //         break;
        //     }
        // }
        for(int i=0;i<n;i++) {
            nums1[m+i] = nums2[i];
        }
        sort(nums1.begin(),nums1.end());
    }
};
class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int>v_merge(nums1.size()+nums2.size());
        merge(nums1.begin(),nums1.end(),nums2.begin(),nums2.end(),v_merge.begin());
        int n = v_merge.size();

        if (n % 2 == 0) {
            return (v_merge[n/2 - 1] + v_merge[n/2]) / 2.0;
        }
        else {
            return v_merge[n/2];
        }
    }


};
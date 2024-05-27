class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        double ans=0;
        vector<int>mergedarray(nums1.size()+nums2.size());
        int idxNums1 = 0; 
        int idxNums2 = 0;

        for(int i=0 ;i< mergedarray.size(); i++){
            if (idxNums2 != nums2.size() && (idxNums1 == nums1.size() || nums2[idxNums2] < nums1[idxNums1])){
                mergedarray[i] = nums2[idxNums2++];
            }else{
                mergedarray[i] = nums1[idxNums1++];
            }
        }
        if(mergedarray.size() % 2 == 1){
            return mergedarray[mergedarray.size() / 2.0000];
        }else{
            return ((mergedarray[mergedarray.size() / 2]) + (mergedarray[mergedarray.size() / 2 - 1])) / 2.0;
        }
    }
};
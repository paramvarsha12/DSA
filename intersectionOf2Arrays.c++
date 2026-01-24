#include <set>
class Solution {
public:

    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> NewArray;
        for (int i=0; i< nums1.size(); i++) {
            for (int j=0; j < nums2.size(); j++) {
                int value = nums1[i];

                if (find(NewArray.begin(), NewArray.end(), value) != NewArray.end()) {
                    continue;
                }

                if (nums1[i] == nums2[j]) {
                    NewArray.push_back(nums1[i]);
                }
            }
        }

        return NewArray;
    }
};
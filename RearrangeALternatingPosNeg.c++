
    int countArrays(vector<int>& original, vector<vector<int>>& bounds) {
        int n = nums.size();
        vector<int> ans(0,n);
        int posIndex = 0;
        int negIndex = 1;

        for (int i=0; i<n; i++) {
            if (nums[i] < 0) {
                ans[negIndex] = nums[i];
                negIndex += 2;
            }

            else if(nums[i] > 0) {
                ans[posIndex] = nums[i];
                posIndex += 2;
            }
        }
        return ans;
    }
};
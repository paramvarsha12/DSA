#arrays 

---

```
int RemoveDuplicates(int n, vector<int> &arr) {
    int i = 0;

    for (int j = 1; j<n; j++) {
        if (arr[i] != arr[j]) {
            arr[i+1] = arr[j];
            i++;
        }
    }
    return i+1;
}
```

---

### STEPS :

1. We have an array : `[2, 2, 2, 3, 3, 3, 3, 4, 4, 4]`
2. Our `i` pointer points to the 0th element and the `j` pointer starts from the 1st element
3. We move the `j` pointer to the next elements, till we reach 3.. then we notice that `arr[i] != arr[j]`, `i` pointer moves to the next element which is at 1st index, and takes the value of `arr[j]` which is currently 3, so it comes under the unique elements part
4. Then we keep checking till the point where a different element pops up, like when `j` pointer reaches 4, so then the `i` pointer increments by 1 and then moves to the 3rd index, which takes the `arr[j]` value next and points to 4, putting it in the unique elements part
5. Then we keep looping till the end of the array and stop it, and we'll have 3 unique elements stored with us

---

Time Complexity : O(n)
Space Complexity : O(1)



---

Same thing for getting the count of the total elements that are taken atmost 2 times in the array (leetcode) :

```class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        if (n <= 2) return n;

        int i = 2;  // first two elements are always allowed

        for (int j = 2; j < n; j++) {
            if (nums[j] != nums[i - 2]) {
                nums[i] = nums[j];
                i++;
            }
        }

        return i;
    }
};
```
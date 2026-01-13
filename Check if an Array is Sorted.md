#arrays 

---

```
int isSorted(int n, vector<int> &arr) {

    for (int i=0; i<n; i++) {
        if (arr[i] >= arr[i-1]) {
        
        }

        else {
            return false;
        }
    }
    return true;
}
```

---

Pretty simple solution, keep checking if the next element is greater than the previous element constantly, could work for everything

---

Time Complexity : O(n)


#arrays 

---

```
int findLargest(int arr[], int n) {
    int largest = arr[0];   // assume first element is the largest

    for (int i = 1; i < n; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }

    return largest;
}
```

---

### DRY RUN :

## Example 2 (All Negative Numbers — Tricky Case)

`arr = [-8, -3, -10, -1, -5]`

Initial:

`largest = -8`

|i|arr[i]|largest before|largest after|
|---|---|---|---|
|1|-3|-8|-3|
|2|-10|-3|-3|
|3|-1|-3|-1|
|4|-5|-1|-1|

---

Time Complexity : O(n)

Space Complexity : O(1)


---

### ❓ Can this be done recursively?

Yes, but:

- Adds stack space → worse than iterative
    
- Interviewers prefer this version




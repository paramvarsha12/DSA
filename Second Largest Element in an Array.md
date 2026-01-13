#arrays 

---

```
int secondLargest(vector<int> &a, int n) {
	 if (n < 2) return -1;
	 
    int largest = a[0];
    int slargest = -1;

    for (i = 1; i<n; i++) {
        if (a[i] > largest) {
            slargest = largest;
            largest = a[i];
        }

        else if (a[i] < largest && a[i] > slargest) {
            slargest = a[i];
        }
    }
    
    
     if (slargest == INT_MIN)
        return -1;

        return slargest;
    }
```

---

### STEPS :

1.  ` Suppose we have the array : [2,4,7,7,5]`
2.  We initialize the largest element to the first element (which is 2)
3. `largest = 2;`      `slargest = -1;`
4. We loop through the array, and we check for 4 (4 is greater than 2, so then we push 2 as the second largest element)
5. `largest = 4;`       `slargest = 2;`
6. We do the same till 7, till we get `largest = 7;`   `slargest = 4;`
7. Then the last element : 5
8. We use the `else if` statement to get the `slargest = 5;`

---

### DRY RUN :

### Input

`a = {-5, -2, -10, -1}`

### Fixed Code Behavior

|Step|largest|slargest|
|---|---|---|
|-5|-5|-∞|
|-2|-2|-5|
|-10|-2|-5|
|-1|-1|-2|

✅ Output = **-2**

---

That value is:
`INT_MIN = -2147483648`

Now:
- Any number `> INT_MIN` → true
- So updates work correctly


**for n<2 :**
1. Prevents asking a logically invalid question  
2. Protects memory access

---

Time Complexity : O(n)
Space Complexity : O(1)
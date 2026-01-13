#arrays 

---

Pretty Easy Problem : 

```
int RotateLeftArray(int n, vector<int> &arr) {

    int n = arr.size();
    if (n<=1) return;

    int first = arr[0];

    for (int i = 0; i<n; i++) {
       arr[i] = arr[i+1];
    }

    arr[n-1] = first;
}
```

---

### Input

`arr = [1, 2, 3, 4, 5]`

### Output

`arr = [2, 3, 4, 5, 1]`
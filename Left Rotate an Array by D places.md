#arrays 

---

```
void LeftRotatebyD(int d, vector<int> &arr) {

    int n = arr.size();
    if (n==0) return;

    d = d % n;

    reverse(arr.begin(), arr.begin() + d);
    reverse(arr.begin + d, arr.end());
    reverse(arr.begin(), arr.end());
}
```

---

### Why we use `d = d % n;` :

- Suppose we have `n` as the size of the array
- And `d` is the amount of places we need to rotate the array by
- `d % n` prevents useless rotations

Suppose for example : 
`n = 5`
`d = 12 → 12 % 5 = 2`

`arr[] = [1, 2, 3, 4, 5]`
and we need to rotate by 12 times, the whole array is of 5 values, so we take the mod of that and we'll be left with `2` to rotate

---

### EXPLANATION : 

1. Now suppose we have an array `arr[] = [1, 2, 3, 4, 6, 7, 8]` & `d = 3`
2. We first reverse the array from `arr.begin()` to `arr.begin() + d`
3. We'll have to reverse the elements from `index 0 to index d-1` => 
   `arr[] = [3, 2, 1, 4, 6, 7, 8`
4. Then we reverse the array from `arr.begin() + d` to `arr.end()`
5. We'll reverse the elements from `index d to index n-1` =>
   `arr[] = [3, 2, 1, 8, 7, 6, 4]`
6. Then after this we do reverse the whole array : `reverse(arr.begin(), arr.end())`
7. We'll have `arr[] = [4, 6, 7, 8, 1, 2, 3`]
8. And then we will notice that the whole array is shifted by D places

---

### TIME COMPLEXITY : 

We do:

- One reverse of `d` elements → O(d)

- One reverse of `n-d` elements → O(n-d)

- One reverse of `n` elements → O(n)


Total:
`O(d + (n-d) + n) = O(2n) = O(n)`


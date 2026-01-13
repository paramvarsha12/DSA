#bst 

---

```
vector<int> mergeBSTs(TreeNode* root1, TreeNode* root2) {
    vector<int> a, b;

    inorder(root1, a);
    inorder(root2, b);

    return mergeArrays(a, b);
}
```



---

For a **BST**:
`Inorder traversal → sorted list`
So:
1. Get sorted list from BST1
2. Get sorted list from BST2
3. Merge the two sorted lists
This is exactly like **merge step of merge sort**.

---

```
BST 1 :

    3
   / \
  1   5
```
Inorder → `[1, 3, 5]`

```
BST 2:

    4
   / \
  2   6
```
Inorder → `[2, 4, 6]`

```
Compare 1 & 2 → take 1
Compare 3 & 2 → take 2
Compare 3 & 4 → take 3
Compare 5 & 4 → take 4
Compare 5 & 6 → take 5
Take remaining → 6
```


Result : 
```
[1, 2, 3, 4, 5, 6]
```


---

## Time Complexity : 
- Inorder BST1 → `O(n)`
- Inorder BST2 → `O(m)`
- Merge arrays → `O(n + m)`
###  **TC = O(n + m)**


## Space Complexity (SC) :
- Two arrays → `O(n + m)`
- Recursion stack → `O(h1 + h2)`
###  **SC = O(n + m)**
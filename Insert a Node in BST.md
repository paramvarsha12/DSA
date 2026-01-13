#bst 

---
`Node *InsertBST (Node* root, int value) {`
    `if (root == NULL) {`
        `Node* newNode = new Node();`
        `newNode->data =  value;`
        `newNode->left = NULL;`
        `newNode->right = NULL;`
        `return newNode;`
    `}`

    `if (value < root->data) {`
        `root->left = InsertBST(root->left, value);`
    `}`

    `else {`
        `root->right = InsertBST(root->right, value);`
    `}`

    `return root;`
`}`

---

1.      10
       /  \
      5    15
2. We have the above tree given, and we need to insert the element "8" in it...
3. **InsertBST(10,8)**....   **8<10 -> go left**.... then call **insertBST(5,8) {because left node}**
4. **Compare 8 >5 -> go right**...  **InsertBST(NULL,8)**... **return the root**
5. read chatgpt on why root is returned (important)

---

# Time Complexity

- **Average case:** `O(log n)` (balanced tree)
- **Worst case:** `O(n)` (skewed tree)

---

# Space Complexity

- **O(h)** recursion stack  
- (`h` = height of tree)

#bst 

---

Height of a tree = Height of the root

---

 `FindHeight(BstNode* root) {`
    `if (root==NULL) {`
        `return -1;`
    `}`
    `int leftHeight = FindHeight(root->left);`
    `int rightHeight = FindHeight(root->right);`
    `return max(leftHeight, rightHeight) + 1;`
`}`

Keeps going on recursively till we find the actual height value, backtracks as well

---
**Time Complexity : O(n)**

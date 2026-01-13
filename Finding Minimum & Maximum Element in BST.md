#bst 

---

There are two methods to solve this question :
1. Iterative Method
2. Recursive Method

---

## ITERATIVE METHOD :

`struct BstNode {`
    `int data;`
    `BstNode* left;`
    `BstNode* right;`
`};`

`int FindMin(BstNode* root) {`
    `if (root==NULL) {`
        `return -1;`
    `}`
    `while (root->left!=NULL`) {`
        `root = root->left;`
    `}`
    `return root->data;`
`}`

`int FindMax(BstNode* root) {`
    `if (root==NULL) {`
        `return -1;`
    `}`
    `while (root->right!=NULL)`
    `{`
        `root = root->right;`
    `}`
    `return root->data;`
`}`


---

## RECURSIVE METHOD 

`struct BstNode {`
    `int data;`
    `BstNode* left;`
    `BstNode* right;`
`};`

`int FindMin(BstNode* root) {`
    `if (root==NULL) {`
        `return -1;`
    `}`
    `else if (root->left == NULL) {`
    `return root->data`
    `}`
    `return FindMin(root->left);`
`}`

`int FindMax(BstNode* root) {`
    `if (root==NULL) {`
        `return -1;`
    `}`
    `else if (root->right == NULL) {`
    `return root->data`
    `}`
    `return root->data;`
`}`
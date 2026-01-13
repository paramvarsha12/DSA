---

---
#bst 

---

### Concept :
![[Pasted image 20251215201539.png]]
1. We are gonna put all of the elements we have discovered in a Queue (FIFO)
2. First when we pass "F", we take the address of the node and pass it, and print "F"
3. Then we take down the left children and the right children of "F", and write their values down too
4. When we deQueue "D" first, we enQueue it's children "B & E", and then when we deQueue "J" next, we enQueue "G & K", and then the process continues..

---

`#include <iostream>`
`#include <queue>`
`using namespace std;`

`struct Node {`
    `char data;`
    `Node* left;`
    `Node* right;`
`};`

`void LevelOrder(Node* root) {`
    `if (root == NULL) {`
        `return;`
    `}`
    `queue<Node*> Q;`
    `Q.push(root);`
    `while (!Q.empty()) {   // while there is at least one discovered node`
        `Node* current = Q.front();   // get the front node`
        `cout << current->data << " ";  // visit the node`
        
        `if (current->left != NULL) {`
            `Q.push(current->left);   // enqueue left child`
        `}`
        
        `if (current->right != NULL) {`
            `Q.push(current->right);  // enqueue right child`
        `}`
        `Q.pop();   // remove the processed node`
    `}`
`}`

---

**Time Complexity : O(n)**
**Space Complexity : O(1)**


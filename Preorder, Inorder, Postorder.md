#bst 

---

# Preorder :

==*Order* : **ROOT -> LEFT -> RIGHT==**

`void Preorder(Node* root) {`
    `if (root == NULL) {`
        `return;`
    `}`
    `cout << root->data << " ";`
    `Preorder(root->left);`
    `Preorder(root->right);`
`}`


---

# Inorder : 

==Order : **LEFT -> ROOT -> RIGHT==**

`void Inorder(Node* root) {`
    `if (root == NULL) {`
        `return;`
    `}`
    `Inorder(root->left);`
    `cout << root->data << " ";`
    `Inorder(root->right);`
`}`

---

# Postorder : 

==Order : **LEFT -> RIGHT -> ROOT==**

`void Postorder(Node* root) {`
    `if (root == NULL) {`
        `return;`
    `}`
    `Postorder(root->left);`
    `Postorder(root->right);`
    `cout << root->data << " ";`
`}`
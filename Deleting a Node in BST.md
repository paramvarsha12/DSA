#bst 

---

**Case 1** : No child
**Case 2** : 1 child
**Case 3** : 2 children

**For Case 3 :**
1. Find **min** in right subtree
2. Copy the value of the minimum value in the targeted node
3. Delete duplicate from the right subtree

***OR***

1. Find **max** in left subtree
2. Copy the value of the maximum value in the targeted node
3. Delete duplicate from the left subtree

---

`struct Node* Delete(struct Node* root, int data) {`

    if (root == NULL) return root;

    else if(data < root->data) {
        root->left = Delete(root->left, data);
    }

    else if(data > root->data) {
        root->right = Delete(root->right, data);
    }

    else {
        // Case 1: No child
        if (root->left == NULL && root->right == NULL) {
            delete root;
            root = NULL;
        }

        // Case 2: One child
        else if (root->left == NULL) {
            struct Node* temp = root;
            root = root->right;
            delete temp;
        }

        else if (root->right == NULL) {
            struct Node* temp = root;
            root = root->left;
            delete temp;
        }

        // Case 3: Two children
        else {
            struct Node* temp = FindMin(root->right);
            root->data = temp->data;
            root->right = Delete(root->right, temp->data);
        }
    }
`}`

---

**Example Run :**

![[Pasted image 20251224200923.png]]

1. Suppose we need to delete **15** from the tree.
2. Make a call to the delete function passing the address of the root *(200)* 
3. **DELETE (200,15)**
4. Control goes to the `root->right = Delete(root->right, data);`
5. **DELETE (350,15)**
6. We will proceed to case 3 (2 children)
7. Node with minimum value in the right subtree is **17**. and address is **400**
8. Then we set the data in the **node 350** to 17
9. Now we are making a recursive call to delete right subtree of **350**
10. **DELETE (400,17)**
11. Delete the node at **address 400** and return the root as **NULL**
12. Now **DELETE (350,15)** will resume, we will set the address of the right child as **NULL**
13. Now we are at **DELETE (200,15)**
14. The function is returned with **address 350**
15. The node is deleted
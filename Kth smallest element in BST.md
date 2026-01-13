#bst 

---

**Code :**
```
int count = 0;
int answer = -1;

void inorder(TreeNode* root, int k) {
    if (!root || count >= k) {
        return;

    inorder(root->left, k);

    count = count++;
    if (count == k) {
        answer = root->val;
        return;
    }
    inorder(root->right, k);
} 

int kthsmallest(TreeNode* root, int k) {
    inorder (root, k);
    return answer;
}
}

```

---


**DRY RUN :**

```
        5
       / \
      3   7
     / \   \
    2   4   8

```

1. We keep initiliaze `count = 0` and `answer = -1`.
		**count = How many nodes have I visited in sorted order so far?** 

2. We do ==inorder traversal== for this tree {*LEFT, ROOT, RIGHT*} and the order is 
 ```
 2,3,4,5,7,8
 ```
 
 3. Now lets say our k value is 3, and we need to find the node data for the smallest k element
 
 4. Start from root (5) and call :
 ``` 
 inorder (5,3)
 ```
 Since `root != NULL or count < k`, continue

5. Go left from node 5 -> node 3 :
```
inorder (3,3)
```
Since `root!=NULL or count <k`, continue

6. Go left from node 3 -> node 2 :
```
inorder (2,3)
```
Since `root!=NULL or count < k` continue

7. Go left from node 2 -> NULL :
```
inorder (NULL, 3)
```
The line ` if ( !root || count >= k) return;` and returns immediately

8. Now we visit node 2 {*according to inorder*}
			execute `count++`        //count = 1 
			Check `if (count == k)`      //is 1= = 3, no
	Then we go right
	`inorder (NULL,3)` and return


9. Now we go back to node 3
			execute `count++`     //count = 2
			Check `if (count == k)`      /is 2 = = 3, no
	Then we go right to node 4


10. Once we visit node 4, we go to the left of it which is `NULL`
		then we go back to node 4 after that, which makes it
		`count++`   //count = 3
		Check `if (count == k)`   , yes 3= =3

			answer = 4;
			return;




---

Time Complexity :

Best case : O(K)
 You stop traversal as soon as `count == k`.
- If `k` is small (like `k = 1`), you stop very early.

Worst case : O(n)
In the worst case, you may need to visit **all nodes** of the BST.



--- 

Kth largest element is also similar : 
```
int count = 0;
int answer = -1;

void reverseInorder(TreeNode* root, int k) {
    if (root == NULL || count >= k)
        return;

    // 1. Go to right subtree first
    reverseInorder(root->right, k);

    // 2. Visit node
    count = count + 1;
    if (count == k) {
        answer = root->val;
        return;
    }

    // 3. Go to left subtree
    reverseInorder(root->left, k);
}

int kthLargest(TreeNode* root, int k) {
    reverseInorder(root, k);
    return answer;
}
```
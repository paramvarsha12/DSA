struct BstNode {
    int data;
    struct BstNode* left;
    struct BstNode* right;
};

BstNode* getNewNode(int data) {
    BstNode* newNode = new BstNode();
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}


 BstNode* Insert(BstNode** root, int data) {
    if (root == NULL){
        root = getNewNode(data); 
    }
    else if (data <= root->data) {
        root->left = Insert(root->left,data);
    }
    else {
        root->right = Insert(root->right, data);
    }
    return root;
 }


int main() {
BstNode* root;  //pointer to root node
root = NULL;   //setting tree as empty
root = Insert(&root,15);
root = Insert(&root,10);
root = Insert(&root,20);
}

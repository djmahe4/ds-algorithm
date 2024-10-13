#include <stdio.h>
#include <stdlib.h>
struct TreeNode {
int data;
struct TreeNode* left;
struct TreeNode* right;
};
struct TreeNode* createNode(int data) {
struct TreeNode* newNode = (struct TreeNode*)malloc(sizeof(struct TreeNode));
newNode->data = data;
newNode->left = newNode->right = NULL;
return newNode;
}
void inorderTraversal(struct TreeNode* root) {
if (root != NULL) {
inorderTraversal(root->left);
printf("%d ", root->data);
inorderTraversal(root->right);
}
}
void preorderTraversal(struct TreeNode* root) {
if (root != NULL) {
printf("%d ", root->data);
preorderTraversal(root->left);
preorderTraversal(root->right);

}
}
void postorderTraversal(struct TreeNode* root) {
if (root != NULL) {
postorderTraversal(root->left);
postorderTraversal(root->right);
printf("%d ", root->data);
}
}
struct TreeNode* insertNode(struct TreeNode* root, int data) {
if (root == NULL) {
return createNode(data);
}
if (data < root->data) {
root->left = insertNode(root->left, data);
} else {
root->right = insertNode(root->right, data);
}
return root;
}
int main() {
struct TreeNode* root = NULL;
int n, data;
printf("Enter the number of nodes: ");
scanf("%d", &n);
for (int i = 0; i < n; i++) {
printf("Enter value for node %d: ", i + 1);
scanf("%d", &data);
root = insertNode(root, data);
}
printf("Inorder Traversal: ");
inorderTraversal(root);
printf("\nPreorder Traversal: ");
preorderTraversal(root);
printf("\nPostorder Traversal: ");
postorderTraversal(root);
printf("\n");
return 0;
}

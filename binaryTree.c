#include <stdio.h>
#include <stdlib.h>
struct node{
  int data;
  struct node* left;
  struct node* right;
};
struct node* newNode(int data){
  struct node* node=(struct node*)malloc(sizeof(struct node));
  node->right=NULL;
  node->left=NULL;
  node->data=data;
  return node;
}
void printPreorder(struct node* node)
{
     if (node == NULL)
          return;
     printf("%3d", node->data);
     printPreorder(node->left);
     printPreorder(node->right);
}
void printPostorder(struct node* node){
  if (node ==NULL) {
    return;
  }
    printPostorder(node->left);
    printPostorder(node->right);
    printf("%3d",node->data);
}
void printInorder(struct node* node){
  if(node==NULL){
    return;
  }
  printInorder(node->left);
  printf("%3d",node->data);
  printInorder(node->right);

}
int main(){
  struct node *root=newNode(1);
  root->left = newNode(2);
  root->right= newNode(3);
  root->left->left = newNode(4);
  root->left->right= newNode(5);
  printf("%s\n","PREORDER:");
  printPreorder(root);
  printf("\n");
  printf("%s\n","POSTORDER:");
  printPostorder(root);
  printf("\n");
  printf("%s\n","INORDER:");
  printInorder(root);
  return 0;
}

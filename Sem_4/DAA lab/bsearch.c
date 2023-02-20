#include <stdio.h>
#include <stdlib.h>

struct node {
  int key;
  struct node *left, *right;
};


struct node *newNode(int item) {
  struct node *temp = (struct node *)malloc(sizeof(struct node));
  temp->key = item;
  temp->left = temp->right = NULL;
  return temp;
}
struct node *insert(struct node *node, int key) {
  if (node == NULL) return newNode(key);

  if (key < node->key)
    node->left = insert(node->left, key);
  else
    node->right = insert(node->right, key);

  return node;
}
void Rsearch(struct node*t ,int key)
{
  if(t->key == key ){
    printf("key found\n");
    return ;}

else if(t->key>key)
{
  return Rsearch(t->left , key);
    t = t->left ;
}
else
{
  return Rsearch(t->right ,key) ;
   t= t->right ;

}
}
void inorder(struct node*t )
{
  while(t)
  {
    inorder(t->left) ;
    printf("%d ->",t->key) ;
    inorder(t->right) ;
  }
}
int main ()
{
  struct node *root = NULL ;
  root  = insert(root, 8);
  root = insert(root ,3) ;
  root = insert(root , 1) ;
  root = insert(root , 6) ;
  root = insert(root , 7) ;
  root = insert(root , 10) ;
  root = insert(root , 14) ;
  root = insert(root , 4) ;
  Rsearch(root , 9) ;
  Rsearch(root , 6) ;
  inorder(root) ;

}
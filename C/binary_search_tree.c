// Binary Search Tree operations in C

#include <stdio.h>
#include <stdlib.h>

struct queue
{
    int data;
    struct queue* next;
}*front=NULL,*rear=NULL;

void enqueue(int data)
{
    struct queue *t;
    t=(struct queue*)malloc(sizeof(struct queue));
    if(t==NULL)
    printf("Queue is full\n");

    else
    {
        t->data=data;
        t->next=NULL;
        if(front==NULL)
        front=rear=t;
        else{
            
        rear->next=t;
        rear=t;
        }
    }
}

int dequeue()
{
    int x=-1;
    struct queue*t;
    if(front==NULL)
    printf("Queue is empty\n");
    else
    {
        t=front;
        front=front->next;
       x=t->data;
        free(t);
    }
    return(x);
}


struct node {
  int key;
  struct node *left, *right;
};

// Create a node
struct node *newNode(int item) {
  struct node *temp = (struct node *)malloc(sizeof(struct node));
  temp->key = item;
  temp->left = temp->right = NULL;
  return temp;
}

// Inorder Traversal
void inorder(struct node *root) {
  if (root != NULL) {
    // Traverse left
    inorder(root->left);

    // Traverse root
    printf("%d -> ", root->key);

    // Traverse right
    inorder(root->right);
  }
}

// Insert a node
struct node *insert(struct node *node, int key) {
  // Return a new node if the tree is empty
  if (node == NULL) return newNode(key);

  // Traverse to the right place and insert the node
  if (key < node->key)
    node->left = insert(node->left, key);
  else
    node->right = insert(node->right, key);

  return node;
}

struct node *search ( struct node *root, int data) { 
while (root != NULL) {
if (root->key == data) // Found it
return root;
else if (root->key > data) // In left subtree
root = root->left;
else // In right subtree
root = root->right;
} 
return NULL;
}

// Find the inorder successor
struct node *minValueNode(struct node *node) {
  struct node *current = node;

  // Find the leftmost leaf
  while (current && current->left != NULL)
    current = current->left;

  return current;
}

// Deleting a node
struct node *deleteNode(struct node *root, int key) {
  // Return if the tree is empty
  if (root == NULL) return root;

  // Find the node to be deleted
  if (key < root->key)
    root->left = deleteNode(root->left, key);
  else if (key > root->key)
    root->right = deleteNode(root->right, key);

  else {
    // If the node is with only one child or no child
    if (root->left == NULL) {
      struct node *temp = root->right;
      free(root);
      return temp;
    } else if (root->right == NULL) {
      struct node *temp = root->left;
      free(root);
      return temp;
    }

    // If the node has two children
    struct node *temp = minValueNode(root->right);

    // Place the inorder successor in position of the node to be deleted
    root->key = temp->key;

    // Delete the inorder successor
    root->right = deleteNode(root->right, temp->key);
  }
  return root;
}

struct node* succ(struct node *node){
if (node->right == NULL)
return NULL;
else
{
 enqueue(node)

}
}

struct node *pred(struct node* node) {
if (node->left == NULL)
return NULL;
else
return (node->left);
}

void printNthNode(struct node* root, int N)
{
   if(root == NULL)
       return;

   static int index = 0; //These will initialize to zero only once as its static
   
   //For every Node go to the right of that node first.
   printNthNode(root->right, N);
   enqueue(root->key);

   //Right has returned and now current node will be greatest
   if(++index == N)
   {
    
    return;
   }

   //And at last go to the left
   printNthNode(root->left, N);
}



int main() {
  struct node *root = NULL;
  struct node *root1,*root2,*root3,*root4,*root5,*root6,*root7;
  
  root = insert(root, 8);
  root = insert(root, 3);
  root= insert(root, 1);
  root = insert(root, 6);
  root = insert(root, 7);
  root = insert(root, 10);
  root = insert(root, 14);
  root = insert(root, 4);

  printf("Inorder traversal: ");
  inorder(root);
  printf("\n");
  struct node* head = search(root, 100);
  if(head)
  printf("Found");
  else
  printf("Not Found");
 printf("\n");
  struct node* succesor=succ(root);
  printf("%d",succesor->key);
  printf("\n");
  int n;
  printf("Enter the number: ");
  scanf("%d",&n);
  printNthNode(root,n);
  for(int i=0;i<n;i++)
  {
    int k=dequeue();
    printf("%d\n",k);
  }
}
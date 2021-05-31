#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int data;
    struct node *left, *right;
} Node;

typedef struct tree {
    Node *root;
} Tree;

// Helper functions
Node *create_node(int);
Tree *initialise_tree(void);
void destroy_tree(Tree *);
void destroy_leaves(Node *);

void insert(Tree *, int);
void insert_leaf(Node *, int);
void preorder(Node *);
void inorder(Node *);
void postorder(Node *);

int main() {
    int choice;
    Tree *binary_tree = initialise_tree();

    do {
        printf("\n\nMAIN MENU\n\n");
        printf("1. Insert an element\n");
        printf("2. Preorder\n");
        printf("3. Inorder\n");
        printf("4. Postorder\n");
        printf("5. Exit\n");

        printf("\nYour choice: ");

        scanf("%d", &choice);
        
        switch (choice) {
            int data, priority;
            case 1: {
                printf("Enter data: ");
                scanf("%d", &data);
                insert(binary_tree, data);
                break;
            }
            case 2: {
                preorder(binary_tree->root);
                break;
            }
            case 3: {
                inorder(binary_tree->root);
                break;
            }
            case 4: {
                postorder(binary_tree->root);
                break;
            }
            case 5: {
                return 0;
            }
        }
    }
    while (choice);
    destroy_tree(binary_tree);
    return 0;
}

void insert(Tree* BT, int data){
    Node *new_node = create_node(data);
    if(BT->root==NULL){
        BT->root=new_node;
        return;
    }
    insert_leaf(BT->root, data);
}

void insert_leaf(Node *root, int data) {
    Node *new_node = create_node(data);
    if (data < root->data) {
        if (root->left == NULL)
            root->left = new_node;
        else
            insert_leaf(root->left, data);
    }
    else {
        if (root->right == NULL)
            root->right = new_node;
        else
            insert_leaf(root->right, data);
    }
}
/*
Tree :              10
                5       15
            2       8

preorder  (Root, Left, Right)  : 10  5   2   8   15
inorder   (Left, Root, Right)  : 2   5   8   10  15
postorder (Left, Right, Root)  : 2   8   5   15  10
*/
void preorder(Node *root){
    if (root != NULL) {
        printf("%d ", root->data);
        preorder(root->left);
        preorder(root->right);
    }
}

void inorder(Node *root){
    if (root != NULL) {
        inorder(root->left);
        printf("%d ", root->data);
        inorder(root->right);
    }
}

void postorder(Node *root){
    if (root != NULL) {
        postorder(root->left);
        postorder(root->right);
        printf("%d ", root->data);
    }
}

Node *create_node(int data) {
    Node *new_node = (Node *)malloc(sizeof(Node));
    new_node->data = data;
    new_node->left = NULL;
    new_node->right = NULL;
    return new_node;
}

Tree *initialise_tree() {
    Tree *new_tree = (Tree *)malloc(sizeof(Tree));
    new_tree->root = NULL;
    return new_tree;
}

void destroy_tree(Tree *tree) {
    if (tree == NULL) return;
    destroy_leaves(tree->root);
    free(tree);
}

void destroy_leaves(Node *root) {
    if (root == NULL) return;
    if (root->left == NULL && root->right == NULL) {
        free(root);
        return;
    }
    if (root->left != NULL) {
        destroy_leaves(root->left);
    }

    if (root->right != NULL) {
        destroy_leaves(root->right);
    }
}
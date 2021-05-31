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
void insert_leaf(Node *, int data);

int min_val(Node *);
int max_val(Node *);
int no_of_nodes(Node *);
int no_of_leaf_nodes(Node *);

void delete(Tree *, int);
Node* delete_node(Node *, int);

void display(Node*);

int main() {
    int choice;
    Tree *binary_tree = initialise_tree();

    do {
        printf("\n\nMAIN MENU\n\n");
        printf("1. Insert an element lexically\n");
        printf("2. Delete an element\n");
        printf("3. Minimum value\n");
        printf("4. Maximum value\n");
        printf("5. Number of nodes\n");
        printf("6. Number of leaf nodes\n");
        printf("7. Display(Inorder)\n");
        printf("8. Exit\n");

        printf("\nYour choice: ");

        scanf("%d", &choice);

        switch (choice) {
            int data, priority;
            case 1: {
                printf("Enter data: ");
                scanf("%d", &data);
                insert(binary_tree, data);
                display(binary_tree->root);
                break;
            }
            case 2: {
                printf("Enter value to delete: ");
                scanf("%d", &data);
                delete(binary_tree, data);
                display(binary_tree->root);
                break;
            }
            case 3: {
                int x = min_val(binary_tree->root);
                printf("Minimum: %d\n", x);
                break;
                
            }
            case 4: {
                int x = max_val(binary_tree->root);
                printf("Maximum: %d\n", x);
                break;
            }
            case 5: {
                int x = no_of_nodes(binary_tree->root);
                printf("Number of nodes: %d\n", x);
                break;
            }
            case 6: {
                int x = no_of_leaf_nodes(binary_tree->root);
                printf("Number of leaf nodes: %d\n", x);
                break;
            }
            case 7: {
                display(binary_tree->root);
                break;
            }
            case 8: {
                return 0;
            }
        }
    } while (choice);
    destroy_tree(binary_tree);
    return 0;
}

void insert(Tree *BT, int data) {
    if (BT->root == NULL) {
        Node *new_node = create_node(data);
        BT->root = new_node;
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

void delete(Tree *BT, int data){
    BT->root=delete_node(BT->root,data);
    return;
}

Node* delete_node(Node* root, int data){
    if(root==NULL)
        return root;
    
    Node *temp,*p;
    if(data < root->data)
        root->left = delete_node(root->left,data);
    else if(data > root->data)
        root->right = delete_node(root->right,data);
    else{
        if(root->left == NULL){
            //1 right child or No children
            temp=root->right;
            free(root);
            return temp;
        }
        else if(root->right == NULL){
            //1 left child or No children
            temp=root->left;
            free(root);
            return temp;
        }
        else{ 
            //Node to be deleted has both children
            //Finding p’s leftmost child which is the inorder successor
            p=root->right;
            while(p->left != NULL)
                p=p->left;
            root->data=p->data;
            root->right=delete_node(root->right, p->data);
        }
    }
    return root;
}

int no_of_nodes(Node *root) {
    if (root == NULL)
        return 0;
    return no_of_nodes(root->left) + 1 + no_of_nodes(root->right);
}

int no_of_leaf_nodes(Node *root) {
    if (root == NULL)
        return 0;
    if (root->left == NULL && root->right == NULL)
        return 1;
    return no_of_leaf_nodes(root->left) + no_of_leaf_nodes(root->right);
}

int min_val(Node *root) {
    if(root==NULL)
        return -1;
    if(root->left == NULL)
        return root->data;
    return min_val(root->left);
}

int max_val(Node *root) {
    if (root == NULL)
        return -1;
    if (root->right == NULL) {
        return root->data;
    }
    return max_val(root->right);
}

void display(Node *root){
    if(root){
        display(root->left);
        printf("%d ",root->data);
        display(root->right);
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
    if (root == NULL)
        return;
    if (root->left == NULL && root->right == NULL) {
        free(root);
        return;
    }
    if (root->left != NULL)
        destroy_leaves(root->left);
    if (root->right != NULL)
        destroy_leaves(root->right);
}
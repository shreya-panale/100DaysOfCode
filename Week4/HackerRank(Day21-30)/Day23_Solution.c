#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct Node{
    struct Node* left;
    struct Node* right;
    int data;
}Node;
Node* newNode(int data){
    Node* node=(Node*)malloc(sizeof(Node));
    node->left=node->right=NULL;
    node->data=data;
    return node;
}
int height(Node* root){
    if(root == NULL)
        return 0;
    int Lheight = height(root->left);
    int Rheight = height(root->right);
    if(Lheight>=Rheight)
        return Lheight + 1;
    return Rheight + 1;
}
void currLevel(Node *root,int level){
    if(root ==NULL){
        return;
    }
    if(level==0){
        printf("%d ",root->data);
    }
    else{
        currLevel(root->left,level-1);
        currLevel(root->right,level-1);
    }
}
void levelOrder(Node* root){
  //Write your code here
  if(root){
    int d,h;
    h=height(root);
    for(d=0;d<h;d++){
        currLevel(root,d);
    }
  }
}

Node* insert(Node* root,int data){
    if(root==NULL)
        return newNode(data);
    else{
        Node* cur;
        if(data<=root->data){
            cur=insert(root->left,data);
            root->left=cur;                
        }
        else{
            cur=insert(root->right,data);
            root->right=cur;
        }
        
    }
    return root;
}
int main(){
    Node* root=NULL;
    int T,data;
    scanf("%d",&T);
    while(T-->0){
        scanf("%d",&data);
        root=insert(root,data);
    }
    levelOrder(root);
    return 0;
    
}
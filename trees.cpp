# include<bits/stdc++.h>

using namespace std;
// can be implemented through classes
struct Node{
    int data;
    Node *left;
    Node *right;

};
Node* creation (int item){
    Node* node= new Node;
    node->data=item;
    node->left=NULL;
    node->right=NULL;
    return node;

}
Node* insertion(Node* root, int item){
    if(root==NULL){
        return creation(item);
    }
    if(item<root->data){
        root->left=insertion(root->left,item);
    }
    if(item>root->data){
        root->right=insertion(root->right,item);
    }
    return root;
}

void inorder(Node* root){
    if(root==NULL){
        return ;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

int main(){
    Node* root=NULL;
    root=insertion(root,45);
    root=insertion(root,30);
    root=insertion(root,50);
    root=insertion(root,25);
    root=insertion(root,35);
    root=insertion(root,40);
    root=insertion(root,60);
    root=insertion(root,75);
    inorder(root);
    return 0;

}
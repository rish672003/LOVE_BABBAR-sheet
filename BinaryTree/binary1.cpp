#include<bits/stdc++.h>
using namespace std;

class node{

    //formation of node 
    //constructor
   public:
        int data;
        node* left = NULL;
        node* right = NULL;
    
        node(int d){

            this->data = d;
            this->right = NULL;
            this->left = NULL;

        }



};

node * buildTree(node* root){

    // cout<<"Enter the value of this node " ;
    int data;
    cin>>data;
    root = new node(data);

    if(data == -1 ){
        return NULL;
    }
    cout<<"Enter data for inserting the left";
    root->left = buildTree(root->left);

    cout<<"Enter the value of right ";
    root->right = buildTree(root->right);

    return root;
}

void inorder(node* root){
    if(root == NULL){
        return;
    }

    inorder(root->left);
    cout<<root->data << " ";
    inorder(root->right);


}

void preorder(node* root){
    //base case 
    if(root == NULL){
        return ;
    }
    cout<<root->data;
    preorder(root->left);
    preorder(root->right);
}

void postorder(node* root){
    //base case
    postorder(root->right);
    postorder(root->left);
}

int main(){
    node* root  = NULL;
    root = buildTree(root);

    inorder(root);
   
    return 0;
}

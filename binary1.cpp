
#include<bits/stdc++.h>

using namespace std;

class node{

    public:
     int data;
     node * left;
     node * right;

     node(int d){
        this->data = d;
        this->left = NULL;
        this->right = NULL;

     }


};

node * buildTree(node* root){

    cout<<"Enter the Data : ";
    int data;
    cin >> data;

    root = new node(data);

    if(data = -1){
        return NULL;
    }

    cout<<" Enter the for inserting : "<< data<<  endl;
    root->left = buildTree(root->left);

    cout<<"Enter the value of right side"<< data<< endl;
    root->right =  buildTree(root->right);

    return root;


}

int main(){

    //cretion of binary tree
    node* root  = NULL;

    root = buildTree(root);
   


    return 0;
}
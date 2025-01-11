#include<bits/stdc++.h>

using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node *right;

    Node(int d){
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }

};
// void levelOrdertraversal(Node *root)
// {
//     queue<Node *> q;
//     q.push(root);
//     q.push(NULL);

//     while (!q.empty())
//     {
//         Node *temp = q.front();
//         q.pop();

//         if (temp == NULL)
//         {
//             cout << endl;
//             if (!q.empty())
//             {
//                 q.push(NULL);
//             }
//         }
//         else
//         {
//             cout << temp->data << " ";

//             if (temp->left)
//             {
//                 q.push(temp->left);
//             }
//             if (temp->right)
//             {
//                 q.push(temp->right);
//             }
//         }
//     }
// }

Node* insertintoBST(Node * root, int d){

    if(root == NULL){
        root = new Node(d);
        return root;
    }
    if(d>root->data){
        root -> right = insertintoBST(root->right,d);
    }
    else{
        root->left = insertintoBST(root->left,d);
    }
        return root;
}

void takeinput(Node *&root){

        int data;
        cin>>data;

        while (data != -1)
        {
            /* code */
            root = insertintoBST(root,data);
            cin>> data;
        }
        
};


//minimum value if the BST
Node* minValu(Node* root){
    Node* temp = root;
    while(temp->left = NULL){
            temp = temp ->left;
        
    }
    return temp;
    
    
}
Node* maxValu(Node* root){
    Node* temp = root;
    while(temp->right != NULL){
            temp = temp->right;
        
    }
    return temp;
    
    
}

int main(){
    Node* root  = NULL;

    cout<< "Enter data to create BST: ";

    takeinput(root);
    // levelOrdertraversal(root);
    cout << " MIN value is " << minValu(root)->data<<endl;;
    cout << " Max value is " << maxValu(root)->data;
    
    return 0;
}
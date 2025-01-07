
// creation of the binary tree
#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *left;
    node *right;

    // constuctor
    node(int d)
    {
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};

node *builedfunction(node *root)
{
    cout << "Enter the data " << endl;
    int data;
    cin >> data;
    root = new node(data);

    if (data == -1)
    {
        return NULL;
    }
    cout << "Enter the data inserting the left of " << data << endl;
    root->left = builedfunction(root->left);
    cout << "Enter data for inserting in right of " << data << endl;
    root->right = builedfunction(root->right);
    return root;
};
void levelOrdertraversal(node *root)
{
    queue<node *> q;
    q.push(root);
    q.push(NULL);

    while (!q.empty())
    {
        node *temp = q.front();
        q.pop();

        if (temp == NULL)
        {
            cout << endl;
            if (!q.empty())
            {
                q.push(NULL);
            }
        }
        else
        {
            cout << temp->data << " ";

            if (temp->left)
            {
                q.push(temp->left);
            }
            if (temp->right)
            {
                q.push(temp->right);
            }
        }
    }
}

void inOrder(node *root)
{

    if (root == NULL)
    {
        return;
    }

    inOrder(root->left);
    cout << root->data << " ";
    inOrder(root->right);
}

void preOrder(node *root)
{
    if (root == NULL)
    {
        return;
    }

    cout << root->data << " ";
    preOrder(root->left);
    preOrder(root->right);
}


void postOrder(node* root){
    if(root == NULL){
        return ;
    }
    postOrder(root->left);
    postOrder(root->right);
    cout<<root->data<< " ";
}

int main()
{

    // creating the tree
    node *root = NULL;
    root = builedfunction(root);
    // level orderc
    cout << "Printing the level order traversal output" << endl;
    levelOrdertraversal(root);

    cout << "inorder traversal is ";
    inOrder(root);
    cout << endl;
    // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
    cout << "pretOrder Trasversl is ";
    preOrder(root);
    cout << endl;
    cout << "postorder traversal is ";
    postOrder(root);

    return 0;
}

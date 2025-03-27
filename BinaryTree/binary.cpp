#include <bits/stdc++.h>

using namespace std;

class node
{

public:
    int data;
    node *left;
    node *right;

    node(int d)
    {
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};

node *buildTree(node *root)
{
    cout << "Enter the data: "<< endl;
    int data;
    cin >> data;
    root = new node(data);

    if (data == -1)
    {
        return NULL;
    }

    cout << "Enter data for inserting in left" << endl;
    root->left = buildTree(root->left);

    cout << "Enter the data at right" << endl;
    root->right = buildTree(root->right);
}

void LevelorderTrasversal(node *root)
{

    queue<node *> qt;
    node *temp = root = qt.front();
    qt.pop();

    if(temp->left){
        qt.push(temp->left);

    }

    if(temp->right){
        qt.push(temp->right);
    }







};
int main()
{

    node *root = NULL;

    root = buildTree(root);

    return 0;
}
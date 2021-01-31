#include <bits/stdc++.h>

using namespace std;

//Creating the node
struct node
{
    int data;
    node *left, *right;
};

node *newNode(int val)
{
    node *temp = new node;
    temp->data = val;
    temp->left = temp->right = NULL;
    return temp;
}

node *insert(node *n, int val)
{
    if (n == NULL)
    {

        return newNode(val);
    }

    else
    {
        if (n->data > val)
        {
            if (n->left == NULL)
            {
                n->left = newNode(val);
            }
            else
            {
                insert(n->left, val);
            }
        }

        else
        {
            if (n->right == NULL)
            {
                n->right = newNode(val);
            }
            else
            {
                insert(n->right, val);
            }
        }
    }
}

void inOrderPrint(node *n)
{
    if (n == NULL)
    {
        //cout<<"Tree is empty"<<endl;
        return;
    }

    inOrderPrint(n->left);
    cout << n->data << " ";
    inOrderPrint(n->right);
    
}

void preOrderPrint(node *n)
{
    if (n == NULL)
    {
        //cout<<"Tree is empty"<<endl;
        return;
    }
    cout << n->data<<" ";
    preOrderPrint(n->left);
    preOrderPrint(n->right);
}

void postOrderPrint(node *n)
{
    if (n == NULL)
    {
        //cout<<"Tree is empty"<<endl;
        return;
    }
    
    preOrderPrint(n->left);
    preOrderPrint(n->right);
    cout << n->data<<" ";
}


int main()
{

    node *root = NULL;
    int numOfNodes;
    cout<<"Enter Number of Nodes: ";
    cin>>numOfNodes;
    cout<<"Enter Tree Element: ";
    int root_val;
    cin>> root_val;
    root = insert(root, root_val);
    numOfNodes--;
    while (numOfNodes > 0)
    {
        int val;
        cin >> val;
        insert(root, val);
        numOfNodes--;
    }

    inOrderPrint(root);
    cout<<endl;
    preOrderPrint(root);
    cout<<endl;
    postOrderPrint(root);
}
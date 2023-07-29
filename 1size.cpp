#include <bits/stdc++.h>
using namespace std;

struct Node{
int data;
Node *right;
Node *left;
Node(int x)
{
    data = x;
    right = left = NULL;
}
};

void levelOrderTraversal(Node *root)
{
    if(root == NULL)
    {
        return;
    }

    queue <Node*> q1;
    q1.push(root);
    q1.push(NULL);
    while(q1.size() > 1)
    {
        //take front element
        //insert its children to the rear
        //pop and cout the front element of queue

        //for line by line implementation, each level is stored in queue separated by NULLs from other levels.
        //whenever NULL is encountered(it means another level is inserted completely), so we
        //insert new line, pop the current NULL and push back another NULL in queue.
        Node *curr = q1.front();
        if(curr == NULL)
        {
            cout << endl;
            q1.push(NULL);
            q1.pop();
            continue;
        }
        if(curr -> left != NULL)
        {
            q1.push(curr -> left);
        }

        if(curr -> right != NULL)
        {
            q1.push(curr -> right);
        }
        cout << curr -> data << " ";
        q1.pop();
    }
}

int treesize(Node *root)
{
    if(root == NULL)
    {
        return 0;
    }
    return(treesize(root -> left) + treesize(root -> right) +1);
}

int maxtree(Node * root)
{
    if(root == NULL)
    {
        return INT_MIN;
    }
    return(max(root -> data,max(maxtree(root -> left), maxtree(root-> right))));
}

int main()
{
    Node *root = new Node(10);
    root -> left = new Node(20);
    root -> right = new Node(30);
    root -> left -> left = new Node(40);
    root -> left -> right = new Node(50);
    root -> right -> right = new Node(60);
    root -> right -> right -> left = new Node(70);
    root -> right -> right -> right= new Node(80);
    levelOrderTraversal(root);
    cout << endl;
    cout << endl;
    cout<<"Size of the given Binary Tree is: "<<treesize(root);
    cout<<endl<<"Maximum of the Binary Tree is: "<<maxtree(root);
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node *next;
    Node (int x)
    {
        data = x;
        next = NULL;
    }
};

void printlist(Node *head)
{
    Node *curr = head;
    cout << endl;
    while(curr != NULL)
    {
        cout << curr -> data << " ";
        curr = curr -> next;
    }
}

Node * insertbegin(Node *head, int x)
{
    Node *temp = new Node(x);
    temp -> next = head;
    return temp;
}

Node * reverseList(Node *head)//Iterative, TC = O(n), AS = O(1)
{
    Node *prev = NULL;
    Node *forward = NULL;
    Node *curr = head;
    while(curr != NULL)
    {
        forward = curr -> next;
        curr -> next = prev;
        prev = curr;
        curr = forward;
    }
    return prev;
}

int main()
{
    Node *head = NULL;
    head = insertbegin(head, 40);
    head = insertbegin(head, 30);
    head = insertbegin(head, 20);
    head = insertbegin(head, 10);
    printlist(head);
    head = reverseList(head);
    printlist(head);
    return 0;
}
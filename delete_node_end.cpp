#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *next;

    Node(int x)
    {
        data = x;
        next = NULL;
    }
};

Node *deleteNode(Node *head)
    {
        if (head == NULL)
            return head;
        Node* temp = head;
        head = head->next;
        delete temp;
        return head;
    }

Node* CreateLL(vector<int> &arr){
    Node* head = new Node(arr[0]);
    Node* mover = head;
    for(int i=1; i<arr.size(); i++){
        Node* temp = new Node(arr[i]);
        mover->next = temp;
        mover=temp;
    }
    return head;
}

int main(){
    vector<int> newEG = {12, 17, 18, 4};
    Node* head = CreateLL(newEG);
    head = deleteNode(head);
    Node* mover = head;
    while(mover!=nullptr){
        cout << mover->data << " ";
        mover = mover->next;
    }
}
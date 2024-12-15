#include <iostream>
#include <vector>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    public:
    Node(int data1, Node* next1){
        data = data1;
        next = next1;
    }
    Node(int data1){
        data = data1;
        next = nullptr;
    }
};

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

int LLlength(Node* head){
    int cnt=0;
    Node* mover = head;
    while(mover!=nullptr){
        mover = mover->next;
        cnt++;
    }
    return cnt;
}
int main(){
    vector<int> newEG = {12, 17, 18, 4};
    Node* head = CreateLL(newEG);
    cout << LLlength(head) << endl;
}

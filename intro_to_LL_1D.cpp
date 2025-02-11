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
        next = nullptr;
    }

    public:
    Node(int data1){
        data = data1;
        next = nullptr;
    }
};

Node* Convert2LL(vector<int> &arr){
    Node* head= new Node(arr[0]);
    Node* mover = head;
    for(int i=1; i<arr.size(); i++){
        Node* temp = new Node(arr[i]);
        mover->next=temp;
        mover=temp;
    }
    return head;
}

int main(){
    vector<int> numbers={12, 4, 3, 54};
    Node* head = Convert2LL(numbers);
    cout << head->data;

}

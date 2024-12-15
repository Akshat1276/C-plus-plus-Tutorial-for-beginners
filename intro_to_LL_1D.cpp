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
};
int main(){
    vector<int> numbers={1,2,3,4,5};
    Node* y = new Node(numbers[0], nullptr);
    cout << y->next;
}

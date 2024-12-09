#include <iostream>
#include <vector>
#include <string>

using namespace std;

int myFunc(int a){
    cout << a << endl;
}
double myFunc(double a){
    cout << a << endl;
}
bool myFunc(bool a){
    cout << a << endl;
}

int main(){
    myFunc(10);
    myFunc(3.1);
    myFunc(true);
    return 0;
    // Expected Output: 10, 3.14, 1
}


#include <iostream>
#include <string>
#include <vector>

using namespace std;
void myFunc(int n){
    cout << "The answer is " << n*(n+1)/2 << endl;
}
int main() {
    myFunc(10);
}
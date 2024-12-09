#include <iostream>
#include <string>
using namespace std;
void printint(int &x, int &y){
    cout << x << " " << y << endl;
}

int main() {
    int a = 10;
    // cout << &a;
    int b = 20;
    printint(a,b);
    return 0;
}

#include <iostream>
#include <string>
using namespace std;
void printint(int &x, int &y){
    cout << x << " " << y << endl;
}

int main() {
    int a = 10;
    cout << &a;
    int b = 20;
    printint(0x61ff0c,0x61ff0c);
    return 0;
}

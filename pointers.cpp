#include <string>
#include <iostream>
using namespace std;

int main(){
    int initial = 12;
    int* y = &initial;
    cout << initial << endl;
    cout << y;
    string food = "f00d1e5";
    string* shet = &food;
    cout << shet << endl;
    cout << *shet;
}

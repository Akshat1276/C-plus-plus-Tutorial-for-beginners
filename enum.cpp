#include <iostream>
using namespace std;
enum day{mon,tue,wed,thu,fri,sat,sun};
int main(){
    enum day bob = mon;
    cout << bob;
    return 0;
}
#include <iostream>
#include <string>
using namespace std;

int main(){
    string fname = "john ";
    string lname = "chick";
    string name = fname.append(lname);
    cout << name;
    return 0;
}


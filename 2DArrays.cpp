#include <iostream>
#include <vector>
using namespace std;

int main () {

    string names[1][2];

    cout << sizeof(names) / sizeof(names[0]) << "rows" << endl;
    cout << sizeof(names[0]) / sizeof(string) << "column" << endl;

    return 0;
}
#include <iostream>
#include <vector>
using namespace std;

int main () {

    // Iterating through an array
    int gradesArray[] = {85, 95, 48, 100, 92};

    cout << "Iterating through an array:" << endl;
    for (int i = 0; i < sizeof(gradesArray)/sizeof(gradesArray[0]); i++) {
        cout << gradesArray[i] << endl;
    }

    // Iterating through a vector using a regular for loop
    vector<int> gradesVector{85, 95, 48, 100, 92};

    cout << "Iterating through a vector using a regular for loop:" << endl;
    for (int i = 0; i < gradesVector.size(); i++) {
        cout << gradesVector.at(i) << endl;
    }

    // Iterating through a vector using an enhanced for loop
    cout << "Iterating through a vector using an enhanced for loop:" << endl;
    for (auto i : gradesVector) { // can use int or auto for iterating variable!
        cout << i << endl;
    }

    return 0;
}

#include <iostream>
#include <vector>

using namespace std;

int main () {
    vector<int> numbers(3);

    // Print the address of the vector object (not its contents)
    cout << &numbers << endl;

    // Accessing out-of-bounds element will throw an exception
    try {
        cout << numbers.at(3) << endl;
    } catch (const out_of_range& e) {
        cout << "Out of range error: " << e.what() << endl;
    }

    int digits[3];

    cout << "Size of vector: " << numbers.size() << endl;
    cout << "Size of array: " << sizeof(digits) / sizeof(digits[0]) << endl;

    return 0;
}

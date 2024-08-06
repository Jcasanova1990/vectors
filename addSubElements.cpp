#include <iostream>
#include <vector>
using namespace std;

int main () {
    // Adding
    vector<int> numbers(2); // Initialize a vector with 2 elements (default value 0)
    numbers.insert(numbers.begin() + 1, 50); // Add 50 to index 1
    cout << numbers.at(0) << endl; // Output: 0
    cout << numbers.at(1) << endl; // Output: 50
    cout << numbers.at(2) << endl; // Output: 0

    numbers.insert(numbers.begin() + 1, 100); // Add 100 to index 1
    cout << numbers.at(0) << endl; // Output: 0
    cout << numbers.at(1) << endl; // Output: 100
    cout << numbers.at(2) << endl; // Output: 50

    // Removing
    vector<int> numbers2; // Empty vector
    numbers2.push_back(50); // Add 50 to vector
    numbers2.push_back(100); // Add 100 to vector
    cout << numbers2.at(0) << endl; // Output: 50
    cout << numbers2.at(1) << endl; // Output: 100

    numbers2.pop_back(); // Remove last element from vector
    cout << numbers2.at(0) << endl; // Output: 50
    // Since there's only one element left, avoid accessing out of range
    // cout << numbers2.at(1) << endl; // This would cause an out-of-range error

    // Additional Removing
    vector<int> numbers3; // Empty vector
    numbers3.push_back(50); // Add 50 to vector
    numbers3.push_back(100); // Add 100 to vector
    cout << numbers3.at(0) << endl; // Output: 50
    cout << numbers3.at(1) << endl; // Output: 100

    numbers3.erase(numbers3.begin()); // Remove first element (50)
    cout << numbers3.at(0) << endl; // Output: 100
    // No need to access numbers3.at(1) since it no longer exists

    return 0;
}

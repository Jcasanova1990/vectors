#include <iostream>
#include <vector>
using namespace std;

int main() {

    // Searching for a Particular Element
    vector<string> cars;
    string Camry = "A Camry is not available."; // Default string value

    cars.push_back("Corolla");
    cars.push_back("Camry");
    cars.push_back("Prius");
    cars.push_back("RAV4");
    cars.push_back("Highlander");

    for (const auto& car : cars) { // Enhanced for loop
        if (car == "Camry") { // If "Camry" is in the vector
            Camry = "A Camry is available."; // Update the variable if "Camry" exists
        }
    }
    cout << Camry << endl; // Print whether Camry exists or not

    // Finding the Minimum Grade
    vector<int> grades;
    grades.push_back(72);
    grades.push_back(84);
    grades.push_back(63);
    grades.push_back(55);
    grades.push_back(98);

    int min = grades.at(0); // Set min to the first element in the vector

    for (const auto& grade : grades) { // Enhanced for loop
        if (grade < min) { // If an element is less than min
            min = grade; // Set min to the smaller element
        }
    }
    cout << "The lowest grade is " << min << endl; // Print the lowest element

    // Reversing the Order of Elements
    vector<string> letters;
    letters.push_back("A");
    letters.push_back("B");
    letters.push_back("C");
    letters.push_back("D");
    letters.push_back("E");
    
    int originalSize = letters.size(); // Original size of the vector
    
    // Add elements in reverse order to the vector
    for (int i = originalSize - 1; i >= 0; i--) {
        letters.push_back(letters.at(i));
    }
    
    // Remove all the original elements
    letters.erase(letters.begin(), letters.begin() + originalSize);

    // Enhanced for loop to print the new vector elements
    for (const auto& letter : letters) {
        cout << letter << " "; // Print all new vector elements
    }
    cout << endl;

    return 0;
}

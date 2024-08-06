#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // First method: Adding elements using push_back
    vector<string> contact1;

    // Adding elements
    contact1.push_back("First name");
    contact1.push_back("Last name");
    contact1.push_back("Phone number");

    // Display the contact information
    cout << contact1.at(0) << " " 
         << contact1.at(1) << " " 
         << contact1.at(2) << endl;

    // Update the phone number to email
    contact1.at(2) = "Email"; // Change element at index 2 to "Email"
    
    // Display the updated contact information
    cout << contact1.at(0) << " " 
         << contact1.at(1) << " " 
         << contact1.at(2) << endl;

    // Second method: Initializing vector elements directly
    vector<string> contact2{"First name", "Last name", "Phone number"};
    
    // Display the contact information
    cout << contact2.at(0) << " " 
         << contact2.at(1) << " " 
         << contact2.at(2) << endl;

    // Update the phone number to email
    contact2.at(2) = "Email"; // Change element at index 2 to "Email"
    
    // Display the updated contact information
    cout << contact2.at(0) << " " 
         << contact2.at(1) << " " 
         << contact2.at(2) << endl;
     
    return 0;
}

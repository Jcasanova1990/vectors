#include <iostream>
using namespace std;

int main() {

// standard way
// string friends[] = {"Alan", "Bob", "Carol", "David", "Ellen", 
//                     "Fred", "Grace", "Henry", "Ian", "Jen"};

// cout << friends[0] << endl;
// cout << friends[1] << endl;
// cout << friends[2] << endl;
// cout << friends[3] << endl;
// cout << friends[4] << endl;
// cout << friends[5] << endl;
// cout << friends[6] << endl;
// cout << friends[7] << endl;
// cout << friends[8] << endl;
// cout << friends[9] << endl;

// more efficient way by using for loop
    string friends[] = {"Alan", "Bob", "Carol", "David", "Ellen", 
                    "Fred", "Grace", "Henry", "Ian", "Jen"};

for (int i = 0; i < 10; i++) {
  cout << friends[i] << endl;


// cancels multiplication and displays actual string size, sizeOf by itself 
// in this instance will cause it to multiply 32 * 10 = 320 because its calculating string size.

string friends[] = {"Alan", "Bob", "Carol", "David", "Ellen", 
                    "Fred", "Grace", "Henry", "Ian", "Jen"};

cout << sizeof(friends) / sizeof(friends[0]) << endl;

  return 0;
}
}
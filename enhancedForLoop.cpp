#include <iostream>
using namespace std;

int main () {
    string friends[] = {"Alan", "Bob", "Carol", "David", "Ellen", 
                    "Fred", "Grace", "Henry", "Ian", "Jen"};

for (string i : friends) {
  cout << i << endl;
}

return 0;
}
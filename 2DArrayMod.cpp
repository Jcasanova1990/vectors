#include <iostream>
#include <vector>
using namespace std;

int main()
{

    string names[3][5] = {{"Alan", "Bob", "Carol", "David", "Ellen"},
                          {"Fred", "Grace", "Henry", "Ian", "Jen"},
                          {"Kelly", "Liam", "Mary", "Nancy", "Owen"}};

    cout << names[1][2] << endl;

    names[1][2] = "Harry";
    cout << names[1][2] << endl;
}
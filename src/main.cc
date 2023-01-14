#include <iostream>
#include <vector>

#include "integer_to_roman.h"

using namespace std;

int main ()
{
    vector<int> inputIntegers{1, 3, 99, 2022};

    for (int i: inputIntegers)
        cout << i << " -> " << intToRoman(i) << "\n";
}

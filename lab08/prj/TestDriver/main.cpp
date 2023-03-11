#include <iostream>
#include <cmath>
#include "ModulesPylypenko.h"

#define ARRAY_SIZE 8

using namespace std;

int main() {

    const float x[ARRAY_SIZE] = {-6, 2, 4,   2, -3,   2,  -0.4, 5};
    const float y[ARRAY_SIZE] = {-2, 8, 0.8, 3, 16.8,   12, 12, 9};
    const float z[ARRAY_SIZE] = {2,  1, 3.2, 8, 18.2, 19,  6.4, 11};
    const float expectedResult[ARRAY_SIZE] = {36, 121, 64, 169, 1024, 1089, 324, 625};

    for (short int i = 0; i < ARRAY_SIZE; i++) {
        const float currentReasult = round(s_calculation(x[i], y[i], z[i])*10000) / 10000;
        if (currentReasult == expectedResult[i])
            cout << "Test #" << i+1 << " : PASSED\n";
        else
            cout << "Test #" << i+1 << " : FAILED\n";
    }
}

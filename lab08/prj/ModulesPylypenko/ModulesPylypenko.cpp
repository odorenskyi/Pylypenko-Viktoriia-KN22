#include <cmath>

const float pi = 3.14159;

float s_calculation(float x, float y, float z){
    return pow((x + y + z), 2) - 2 * pi * sqrt((1/3) * z);
}


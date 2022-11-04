#include <math.h>

float calculateGX(float x) {
    float absX = abs(x);
    float expOfAbs = exp(absX);
    float cosX = cos(x);
    float result = expOfAbs * cosX;
    return result;
}

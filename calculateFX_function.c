#include <math.h>

float calculateFX(float x) {
    float absX = abs(x);
    printf("X: %f", absX);
    float expOfAbs = exp(absX);
    float sinX = sin(x);
    float result = expOfAbs * sinX;
    return result;
}

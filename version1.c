#include <stdio.h>
#include <math.h>

float calculateFX(float x) {
    float absX = abs(x);
    printf("X: %f", absX);
    float expOfAbs = exp(absX);
    float sinX = sin(x);
    float result = expOfAbs * sinX;
    return result;
}

float calculateGX(float x) {
    float absX = abs(x);
    float expOfAbs = exp(absX);
    float cosX = cos(x);
    float result = expOfAbs * cosX;
    return result;
}

int main(void) {
    float inputX; 
    printf("Enter x: " );
    scanf("%f", &inputX);
    float resultFX = calculateFX(inputX);
    float resultGX = calculateGX(inputX);
    printf("F(%f)=%f\n", inputX, resultFX);
    printf("G(%f)=%f", inputX, resultGX);
    return 0;
}

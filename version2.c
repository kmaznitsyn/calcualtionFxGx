#include <stdio.h>
#include <math.h>
#include "calculateFX_function.c"
#include "calculateGX_function.c"


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

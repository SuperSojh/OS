// calculate area from radius

#include <math.h>

float areaCircle(float radius) {
    float PI = 3.1415926535;
    return PI*pow(radius, 2);

}

void main() {
    float radius;

    printf("\nPlease enter the radius of the circle: ");
    scanf("%f", &radius);


    printf("\nThe area of a circle with radius %.2f is %.2f. ", areaCircle(radius));
}
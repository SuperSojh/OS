#include <stdio.h>

int main() {
    // read two numbers from user 
    // add them using pointers

    double val1, val2;

    printf("Please enter a number: ");
    scanf("%lf", &val1);

    printf("Please enter another number: ");
    scanf("%lf", &val2);

    double output = val1 + val2;

    printf("\nThe sum of those two numbers is: %.2f\n", output);

}

void main() {

    // part 1 - determining if a number inputted by the user is negative, zero, or positive

    float num;

    printf("Please enter a number  ");
    scanf("%f", &num);

    if(num < 0.0) {
        printf("The number you inputted, %.2f, is negative", num);
    } else if (num > 0) {
        printf("The number you inputted, %.2f, is positive", num);
    } else {
        printf("The number you inputted, %.2f, is zero", num);
    }


    // part 2 - determining if a number inputted by the user is even or odd

    int num2;

    printf("\nPlease enter a number  ");
    scanf("%d", &num2);

    if (num2 % 2 != 0) {
        printf("The number you inputted, %d, is odd.", num2);
    } else {
        printf("The number you inputted, %d, is even.", num2);
    }

}
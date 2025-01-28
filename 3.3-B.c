// calculate area from width and height


float calcArea(float width, float height) {

    return width*height;
}

void main() {

    float width, height;

    printf("\nEnter the width: ");
    scanf("%f", &width);


    printf("\nEnter the height: ");
    scanf("%f", &height);

    printf("\nThe rectangle with width %.2f and height %.2f is %.2f. ", width, height, calcArea(width, height));

}
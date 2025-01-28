// convert temp from f to c



double findTemp(double tempF) {
    double tempC;

    tempC = (tempF - 32.0);

    //printf("%.2f\n", tempC);

    tempC = tempC * ( 5.0 / 9.0);


    //printf("%.2f\n", tempF);
    //printf("%.2f\n", tempC);

    return tempC;
}


void main() {


    double tempF;
    double tempC;

    printf("\nWhat temperature is it right now in fahrenheit? ");
    scanf("%lf", &tempF);

    //printf("%.2f\n", tempF);
    //printf("%.2f\n", tempC);
    

    tempC = findTemp(tempF);

    //printf("%.2f\n", tempF);
    //printf("%.2f\n", tempC);

    printf("\nThe temperature in celsius is %.2f degrees. ", tempC);

}
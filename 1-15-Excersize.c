void main() {

    float temp;

    printf("What is the temperature currently?  ");
    scanf("%f", &temp);
    printf("%d", (temp<85 && temp>70));

    return;
}
void main() {
    int ages[] = {20, 22, 18, 35, 48, 26, 87, 70};

    

    int sumAge;

    for (int i = 0; i < (sizeof(ages)/sizeof(ages[0])); i++) {
        sumAge += ages[i];
        printf("%d is at index %d\n", ages[i], i);
    }

    printf("%d\n", sizeof(ages)/sizeof(ages[0]));
    printf("%d\n", sumAge);

    printf("%.2f is the average age from the array. \n", (float) sumAge / (float) (sizeof(ages)/sizeof(ages[0])));

}
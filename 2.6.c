void main() {
    int ages[] = {20, 22, 18, 35, 48, 26, 87, 70};

    

    int minAge = 99999;

    for (int i = 0; i < (sizeof(ages)/sizeof(ages[0])); i++) {
        if (ages[i] < minAge) {
            minAge = ages[i];
        }
        // printf("%d is at index %d\n", ages[i], i);
    }

    printf("%d is the minimum age from the array. \n", minAge);

}
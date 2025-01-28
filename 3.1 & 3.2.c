
void main() {

    int myNumbers[4] = {25, 50, 75, 100};

    printf("Array: %p\n", &myNumbers);


    for (int i = 0; i < sizeof(myNumbers)/sizeof(myNumbers[0]); i++) {
        printf("Element %d: %p\n", i, &myNumbers[i]);

    }

}
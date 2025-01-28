void main() {
    // declares and initializes a double, int and char
    // pointer for each
    // print address of and value stored in, and memory size of each variable


    // init variables
    double val1 = 4.20;
    int val2 = 69;
    char val3 = 'H';

    // pointers
    double* ptr1 = &val1;
    int* ptr2 = &val2;
    char* ptr3 = &val3;

    // printing everything
    printf("value: %f, address: %p, size of the double: %d, size of the pointer: %d\n", val1, ptr1, sizeof(val1), sizeof(ptr1));
    printf("value: %d, address: %p, size of the int: %d, size of the pointer: %d\n", val2, ptr2, sizeof(val2), sizeof(ptr2));
    printf("value: %c, address: %p, size of the char: %d, size of the pointer: %d\n", val3, ptr3, sizeof(val3), sizeof(ptr3));

}
#include <stdio.h>


void main() {
    FILE *fptr;

    
    fptr = fopen("test.txt", "w");
    fprintf(fptr, "Hello");
    fclose(fptr);
    

    fptr = fopen("test.txt", "r");

    char theString[100];

    fseek(fptr, 0, SEEK_END);
    printf("ld", ftell(fptr));

    /*
    fgets(theString, 100, fptr);

    printf("%s", theString);
    */

    fclose(fptr);


}
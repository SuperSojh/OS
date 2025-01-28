#include <stdio.h>

void main() {
    FILE *fptr;

    fptr = fopen("mynameis.txt", "r");

    char theString[100];

    while (fgets(theString, 100, fptr) != NULL) {
        printf("%s", theString);
    }



    fclose(fptr);


}
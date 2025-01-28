#include <stdio.h>

void main() {
    FILE *fptr;

    
    fptr = fopen("mynameis.txt", "w");
    fprintf(fptr, "Hello,\nHow are you?\nMy name is ...\nWhat is your name?");
    fclose(fptr);


}
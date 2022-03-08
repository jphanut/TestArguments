#include <stdio.h>

int main(int argc, char **argv) {
    char first = '1';
    printf ("%s\n", argv[0]);
    printf ("%s\n", argv[1]);
    for (int i=1; i < argc; i++) {
        if ( i%2 == 0 ) {
            if ( first == '1') {
              first = '0';
            }
            else printf(" ");
            printf(argv[i]);
        }
    }
    if ( first == '0') printf("\n");
    return 0;
}

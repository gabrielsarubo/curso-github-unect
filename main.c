#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
    int a = atoi(argv[1]);
    int b = atoi(argv[2]);

    printf("Hello world!");
    printf("\nMeu nome é Gabriel.");

    printf("\n\nA soma entre %d e %d = %d", a, b, somar(a, b));

    return 0;
}

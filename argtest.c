#include <stdio.h>

int main(int argc, char* argv[]) {
    char** argp;
    int i;
    printf("argc = %d\n", argc);
    for (i = 0, argp = argv; *argp != 0; ++argp, ++i) {
        printf("argv[%d] = %s\n", i, *argp);
    }
    return 0;
}

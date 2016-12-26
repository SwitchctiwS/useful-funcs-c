#include "main.h"

int main(int argc, char** argv) {
    int buffer;
    char* temp = malloc(12 * sizeof *temp);
    printf("Enter buffer size: ");
    fgets(temp, 12, stdin);
    buffer = atoi(temp);

    char *str = malloc(buffer * sizeof *str);

    printf("Enter stuff ");
    str = input(buffer);
    printf("%s\n", str);

    return 0;
}

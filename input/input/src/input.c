#include "../../main.h"

// Does not include newline
// Buffer parameter must include the null terminator
char* input(int buffer) {
    int i;
    char c;
    char* str = malloc(buffer * sizeof *str);

    i = 0;
    while ((c = getchar()) != '\n' && c != EOF) {
        str[i++] = c;

        // If input exceeds the buffer length, it reads the rest of the input buffer but doesn't write to the str variable. This essentially discards the rest of the input buffer after a set length
        if (i == buffer - 1) {
            while ((c = getchar()) != '\n' && c != EOF);
            break;
        }
    }
    str[i] = '\0';

    return str;
}

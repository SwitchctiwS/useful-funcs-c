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

void continue_prompt() {
    #ifdef linux
    // Linux-specific version:
    printf("Press any key to continue...");
    system("stty -echo"); // turns off user input
    system("stty raw"); // writes input directly to stdin
    getchar();

    system("stty echo"); // turns user input back on
    system("stty cooked"); // reenables input buffer
    system("clear"); // clears terminal

    #else
    // Portable version:
    char c;

    printf("Press enter to continue...");
    while ((c = getchar()) != '\n' && c != EOF);
    #endif
}

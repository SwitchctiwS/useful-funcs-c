#include "./continue-prompt.h"
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

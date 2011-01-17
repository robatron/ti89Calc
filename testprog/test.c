#include <tigcclib.h>

void _main(void) {
	int key;
	clrscr();

	while((key = ngetchx()) != KEY_ESC)
		printf("Holy fuck, you pressed the %d key!\n", key);

	// wait for a key press before the program exits
	ngetchx();
}
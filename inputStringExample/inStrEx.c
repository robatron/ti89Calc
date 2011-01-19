// custom string input example based on http://tigcc.ticalc.org/doc/faq.html#68

#define USE_TI89              // Compile for TI-89
#define MIN_AMS 100           // Compile for AMS 1.00 or higher
#define SAVE_SCREEN           // Save/Restore LCD Contents

#include <tigcclib.h>         // Include All Header Files

void inputStr(char *buffer, unsigned short maxlen){
	// custom String Input Function
	
	SCR_STATE ss;
	short key;
	unsigned short i = 0;
	buffer[0] = 0;
	SaveScrState (&ss);

	do{
		MoveTo (ss.CurX, ss.CurY);
		printf ("%s_  ", buffer);
		// note that two spaces are required only if the F_4x6 font is used

		key = ngetchx ();
		if (key >= ' ' && key <= '~' && i < maxlen)
        	buffer[i++] = key;
		else if (key == KEY_BACKSPACE && i)
			i--;
		buffer[i] = 0;
	} while (key != KEY_ENTER);
}

void _main(void){
	/* main */
	
	char s[20];
	clrscr ();
	inputStr (s, 20);
	printf ("\n%s", s);
	ngetchx ();
}
//Laura software for OCESS
//Code by Ryan Torrington-Smith
//Main program

#include <iostream>
#include <allegro.h>
#include <winalleg.h>
#include "LauraData.h"

#define fps = 50

int ticker = 0;

void tick() {
    ticker++;
}

int main() {
	allegro_init();
	install_int_ex(tick, BPS_TO_TIMER(20));
	install_keyboard();
	install_sound(MIDI_AUTODETECT , DIGI_AUTODETECT ,NULL);

	set_color_depth(desktop_color_depth());
	set_gfx_mode(GFX_AUTODETECT_WINDOWED, 640, 480, 0, 0);
	
	textprintf_ex(screen, font, 50, 50, makecol(255, 0, 0), -1, "Compile Sucessful");
	Sleep(10000);
	exit(1);
	return 0;
}
END_OF_MAIN();

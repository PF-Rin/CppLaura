//Laura software for OCESS
//Code by Ryan Torrington-Smith and (Partially) by Spencer Whitehead
//Main program

#include <iostream>
#include <allegro.h>
#include <winalleg.h>
#include "laura.h"
#include "submarine.h"
#include "planet.h"

#define SCREEN_WIDTH 800
#define SCREEN_HEIGHT 600
#define FPS 50

BITMAP *buffer;
volatile int ticks = 0;

void ticker() {
    ticks++;
}

void update();
void draw();

int main() {
	allegro_init();
	install_int_ex(ticker, BPS_TO_TIMER(FPS));
	install_keyboard();
	install_timer();
	install_sound(MIDI_AUTODETECT, DIGI_AUTODETECT, NULL);
	set_color_depth(desktop_color_depth());
	set_gfx_mode(GFX_AUTODETECT_WINDOWED, SCREEN_WIDTH, SCREEN_HEIGHT, 0, 0);
	buffer = create_bitmap(SCREEN_W, SCREEN_H);
	
	textprintf_ex(screen, font, 100, 100, makecol(0, 200, 250), -1, "Initializing Remote Link");
	Sleep(1000);
	textprintf_ex(screen, font, 100 + text_length(font, "Intitializing Remote Lin"), 100, makecol(0, 200, 250), -1, ".");
	Sleep(500);
	textprintf_ex(screen, font, 100 + text_length(font, "Intitializing Remote Link"), 100, makecol(0, 200, 250), -1, ".");
	Sleep(500);
	textprintf_ex(screen, font, 100 + text_length(font, "Intitializing Remote Link."), 100, makecol(0, 200, 250), -1, ".");
	Sleep(1000);
	textprintf_ex(screen, font, 100, 140, makecol(0, 200, 250), -1, "Remote Link Established");
	Sleep(1000);
	textprintf_ex(screen, font, 100, 180, makecol(0, 200, 250), -1, "Engaging Remote Control");
	Sleep(500);
	textprintf_ex(screen, font, 100 + text_length(font, "Engaging Remote Control"), 180, makecol(0, 200, 250), -1, ".");
	Sleep(500);
	textprintf_ex(screen, font, 100 + text_length(font, "Engaging Remote Control."), 180, makecol(0, 200, 250), -1, ".");
	Sleep(500);
	textprintf_ex(screen, font, 100 + text_length(font, "Engaging Remote Control.."), 180, makecol(0, 200, 250), -1, ".");
	Sleep(1000);
	textprintf_ex(screen, font, 100, 220, makecol(0, 200, 250), -1, "Control of Laura MK IV Sucessfully Transfered");
	Sleep(2000);
	
	Submarine laura('L');
	

	while(!key[KEY_ESC]) {
		while(ticks == 0)
			rest(1);
		while(ticks > 0) {
			update();
			--ticks;
		}
		draw();
	}
	
	exit(EXIT_SUCCESS);
}
END_OF_MAIN();

void update() {
	//Perform program logic here	
}

void draw() {
	//Perform all drawing here	
	blit(buffer, screen, 0, 0, 0, 0, buffer->w, buffer->h);
}

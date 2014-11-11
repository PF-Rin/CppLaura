//Laura software for OCESS
//Code by Ryan Torrington-Smith and (Partially) by Spencer Whitehead
//Main program

#include "main.h"

#include "xSDL/xSDL_bitmap.h"
#include "xSDL/xSDL_allegro_wrapper.h"

xSDL_Window *target_window;

#define WIN32_LEAN_AND_MEAN
#define BITMAP WINDOWS_BITMAP
#include <windows.h>
#define WINDOWS_RGB(r,g,b) ((COLORREF)(((BYTE)(r)|((WORD)((BYTE)(g))<<8))|(((DWORD)(BYTE)(b))<<16)))
#undef BITMAP

#define OFFLINE
//#define FULLSCREEN

void update();
void draw();

int main(int argc, char *argv[]) {
	#ifndef OFFLINE
		std::ifstream inFile ("serverLocation.txt");
		std::string serverComputer;
		std::getline(inFile, serverComputer);
		inFile.close();
		serverComputer += "@spacesimServer";
		char *databaseName = (char*) serverComputer.c_str();
		try {
			con.Connect(databaseName, "root", "isotope", SA_MySQL_Client);
		} catch(SAException &x) {
			std::cout << "Error: " << x.ErrText() << std::endl;
			system("pause");
			exit(1);
		}
		int radPC = 0;
		int rcon_lvl = 0;
	#endif 


	//Something definitely has to be changed for this to work with xSDL, not really sure what.
	/*textprintf_ex(screen, font, 100, 100, makecol(0, 200, 250), -1, "Initializing Remote Link");
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
	*/
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

void update() {
	//Perform program logic here	
}

void draw() {
	//Perform all drawing here	
	clear_to_color(target_window->renderer, makecol(0, 0, 0));
	SDL_RenderPresent(target_window->renderer);
}

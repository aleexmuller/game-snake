#include <stdlib.h>
#include <stdio.h>
#include <curses.h>

#include "src/window.c"

int main(void) 
{
	initscr(); 
	clear(); 
	noecho(); 
	cbreak(); 
	halfdelay(3); 
	curs_set(0); 
	keypad(stdscr, TRUE); 
	nodelay(stdscr, TRUE);
	start_color(); 

   int max_x, max_y;
	getmaxyx(stdscr, max_y, max_x);

	WINDOW *janela_principal;
	janela_principal = cria_janela(max_y, max_x, 0, 0);	

   SNAKE* snake = inicializa(10, 10);
}

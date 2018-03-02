#include "../include/window.h"

WINDOW* cria_janela(int comp_y, int comp_x, int y, int x)
{
	WINDOW* janela = newwin(comp_y, comp_x, y, x); 
	init_pair(1, COLOR_GREEN, COLOR_BLACK); 
	wattron(janela, COLOR_PAIR(1)); 
	wattron(janela, A_BOLD); 
	keypad(janela, TRUE); 
	box(janela, 0, 0); 
	wrefresh(janela);
	return janela;
}

void free_janela(WINDOW* janela) 
{
	wrefresh(janela);
	delwin(janela);
}


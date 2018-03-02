#ifndef GAME_H_
#define GAME_H_

//: cria a janela para o jogo
WINDOW* cria_janela(int comp_y, int comp_x, int y, int x);

//: exibe menu principal do game
void exibe_menu_principal(WINDOW *janela, int destaque, char* escolhas[], int num_escolhas);

//: inicia o jogo
void inicia_game();

#endif

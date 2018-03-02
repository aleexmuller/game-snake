#ifndef WINDOW_H_
#define WINDOW_H_

//: cria uma janela
WINDOW* cria_janela(int comp_y, int comp_x, int y, int x);

//: destroi uma janela
void free_janela(WINDOW* janela);

#endif

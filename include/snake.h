#ifndef SNAKE_H_
#define SNAKE_H_

//: define tamanho inicial da snake
#define INIT 3

//: define estrutura da cobra
typedef struct snake {
	int tamanho;
	NO* cabeca;
}SNAKE;

//: faz a snake andar uma posição
void andar(SNAKE* snake, int x, int y);

//: faz a snake comer uma posicao
void comer(SNAKE* snake, int x, int y);

//: inicializa a snake na posicao fornecida
SNAKE* inicializa(int x, int y);

//: destroi a snake
void free_snake(SNAKE* snake);

#endif 

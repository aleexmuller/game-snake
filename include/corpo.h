#ifndef LISTA_H_
#define LISTA_H_

//: define o corpo da snake
typedef struct CORPO {
	int x;
	int y;
	struct CORPO* anterior;
	struct CORPO* proximo;
}CORPO;

//: cria o corpo da snake
CORPO* cria_corpo(int x, int y);

//: adiciona um corpo na snake
CORPO* adiciona(CORPO* cabeca, int x, int y);

//: destroi corpo da snake
CORPO* free_corpo(CORPO* cabeca);

#endif

#ifndef MAPA_H_
#define MAPA_H_

//: define os tamanhos maximos do mapa
#define MAX_X 121
#define MAX_Y 30

#typedef enum {VAZIA = 0, COMIDA = 1, BONUS = 5} CASA;

//: define o tipo de mapa
#define MAPA CASA**

//: inicializa o mapa
MAPA gera_mapa(void);

//: limpa casa
void limpa_casa(MAPA map, int x, int y);

//: destroi um mapa
void free_mapa(MAPA map);

#endif

#ifndef _FOGEFOGE_H_
#define _FOGEFOGE_H_

#define CIMA 'w'
#define BAIXO 's'
#define ESQUERDA 'a'
#define DIREITA 'd'
#define BOMBA 'b'

void ache (int* x, int* y);
void move(char direcao);
int acabou();
void imprimemapa();
int ehdirecao(char direcao);
void explodepilula();
void explodepilulaaux(int x, int y, int somax, int somay, int qtd);

#endif
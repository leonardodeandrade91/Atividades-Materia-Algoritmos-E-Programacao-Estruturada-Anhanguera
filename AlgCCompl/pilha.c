#include "pilha.h"
/*
void criarPilha(struct pilha *p, int c) {
    p->topo = -1;
    p->capa = c;
    p->prElem = (float*)malloc(c * sizeof(float));
}

int estaVazia(struct pilha *p) {
    if(p->topo == -1) {
        return 1;
    }

    return 0;
}

int estaCheia(struct pilha *p) {
    if(p->topo == p->capa - 1) {
        return 1;
    }

    return 0;
}

void empilhar(struct pilha *p, float v) {
    p->topo++;
    p->prElem[p->topo] = v;
}

float desempilhar(struct pilha *p) {
    float aux = p->prElem[p->topo];
    p->topo--;

    return aux;
}

float retornaTopo(struct pilha *p) {
    return p->prElem[p->topo];
}
*/

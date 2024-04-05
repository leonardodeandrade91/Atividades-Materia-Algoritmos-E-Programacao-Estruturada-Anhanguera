#ifndef FILA_H_INCLUDED
#define FILA_H_INCLUDED

struct fila {
    int capac;
    float *dados;
    int prim;
    int ult;
    int itens;
};

void criarFila(struct fila *f, int c);
void inserir(struct fila *f, int v);
int remover(struct fila *f);
int estaCheia(struct fila *f);
int estaVazia(struct fila *f);
void mostrarFila(struct fila *f);

#endif // FILA_H_INCLUDED

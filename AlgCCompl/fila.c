#include "fila.h"

void criarFila(struct fila *f, int c) {
    f->capac = c;
    f->dados = (float*)malloc(f->capac * sizeof(float));
    f->prim = 0;
    f->ult = -1;
    f->itens = 0;
}

void inserir(struct fila *f, int v) {
    if(f->ult == f->capac - 1) {
        f->ult = -1;
    }

    f->ult++;
    f->dados[f->ult] = v;
    f->itens++;
}

int remover(struct fila *f) {
    int temp = f->dados[f->prim++];

    if(f->prim == f->capac) {
        f->prim = 0;
    }

    f->itens--;

    return temp;
}

int estaVazia(struct fila *f) {
    return f->itens == 0;
}

int estaCheia(struct fila *f) {
    return f->itens == f->capac;
}

void mostrarFila(struct fila *f) {
    int cont, i;

    for(cont = 0, i = f->prim; cont < f->itens; cont++) {
        printf("%.2f\t", f->dados[i++]);

        if(i == f->capac) {
            i = 0;
        }
    }

    printf("\n\n");
}

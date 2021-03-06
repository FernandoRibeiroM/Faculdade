#include <stdio.h>
#include <stdlib.h>

#define MAX 100

typedef struct Pilha
{
  int valor[MAX];
  int topo;
} Pilha;

Pilha *criarPilha();
int estaVazia(Pilha *p);
int estaCheia(Pilha *p);
void liberaPilha(Pilha *p);
int empilhar(Pilha *p, int valor);
int desempilha(Pilha *p, int *r);
int pilhaMaisElementos(Pilha *p, Pilha *p2);

int main()
{
  Pilha *p = criarPilha();
  Pilha *p2 = criarPilha();
  int i, valor, maior_pilha;

  for (i = 0; i < 5; i++)
  {
    printf("Informe um valor: ");
    scanf("%d", &valor);
    empilhar(p, valor);
  }

  system("cls");
  for (i = 0; i < 3; i++)
  {
    printf("Informe um valor: ");
    scanf("%d", &valor);
    empilhar(p2, valor);
  }

  maior_pilha = pilhaMaisElementos(p, p2);
  if (maior_pilha == 1)
  {
    printf("Pilha 1 e maior!\n");
  }
  else
  {
    printf("Pilha 2 e maior!\n");
  }

  return 1;
}

Pilha *criarPilha()
{
  Pilha *p = (Pilha *)malloc(sizeof(Pilha));
  p->topo = -1;

  return p;
}

int estaVazia(Pilha *p)
{
  if (p->topo == -1)
  {
    return 1;
  }
  else
  {
    return 0;
  }
}

int estaCheia(Pilha *p)
{
  if (p->topo == MAX - 1)
  {
    return 1;
  }
  else
  {
    return 0;
  }
}

int empilhar(Pilha *p, int valor)
{
  if (!estaCheia(p) == 1)
  {
    p->topo++;
    p->valor[p->topo] = valor;
    return 1;
  }
  else
  {
    return 0;
  }
}

int desempilha(Pilha *p, int *r)
{
  if (estaVazia(p) == 1)
  {
    printf("ERRO: Pilha vazia!\n\n");
  }
  else
  {
    *r = p->valor[p->topo];
    p->topo--;
    return 1;
  }
}

int pilhaMaisElementos(Pilha *p, Pilha *p2)
{
  return p->topo >= p2->topo;
}
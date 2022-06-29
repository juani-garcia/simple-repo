//
// 
// Lista de enteros ordenada y sin repetidos
//

typedef struct node {
    int elem;       // el dato que almacena el nodo
    struct node * next;   // la sublista
} node;

typedef struct node * TList;

int isEmpty(TList l);

int belongs(const TList l, int n);

void freeList(TList l);

int size(const TList l);

int head(const TList l);

TList tail(const TList l);

TList insert(TList l, int n);

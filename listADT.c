//
//
// Lista de enteros ordenada y sin repetidos
//

#include <stdlib.h>
#include <stdio.h>
#include <assert.h>
#include "listADT.h"


int isEmpty(TList l) {
    printf("isEmpty from branch master\n");
    printf("isEmpty from branch belongs");
    return l == NULL;
}

static void isEmptyWrapper() {
	return isEmpry(NULL);
}

// 1 ai n está en la lista, 0 sinó
int belongs(const TList l, int n) {
    if ( l == NULL || l->elem > n) {
        return 0;
    }
    return l->elem == n || belongs(l->next, n);
}

void freeList(TList l) {
    if ( l == NULL) {
        return;
    }
    freeList(l->next);
    free(l);

}

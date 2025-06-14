#include <stdio.h>
#include <assert.h>
#include "../includes/utils.h"

int main(void) {
    // Teste da função de soma
    assert(add(2, 2) == 4);
    assert(add(-1, 1) == 0);
    assert(add(0, 0) == 0);
    
    // Teste da função print (só executa, não testa saída de texto)
    print_hello();

    // Se chegou aqui, passou
    printf("Todos os testes passaram!\n");
    return 0;
}


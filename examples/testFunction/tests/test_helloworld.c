#include <stdio.h>
#include <assert.h>
#include "../includes/utils.h"

int main(void) {
    // Test plus than
    assert(add(2, 2) == 4);
    assert(add(-1, 1) == 0);
    assert(add(0, 0) == 0);
    
    // Test function print
    print_hello();

    // success
    printf("Todos os testes passaram!\n");
    return 0;
}


#include "fatorial.c"
#include <assert.h>
#include <stdio.h>

int main(){
int resultado = fatorial(5);
assert(resultado == 120);
printf("Teste executado com sucesso");
return 0;
}
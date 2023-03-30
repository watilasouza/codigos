#include <stdio.h>
#include <locale.h>

void compfib(){
	int num,aux,term1=0,term2=1;
	printf("Digite um número: ");
      scanf("%d", &num);

    while (term2 < num) {
        aux = term1;
        term1=term2;
        term2=term2+aux;
    }

    if (term2 == num) {
        printf("O número %d pertence á sequência de Fibonacci!\n", num);
    } else {
        printf("O número %d não pertence á sequência de Fibonacci.\n", num);
    }
	
	
}

int main() {
    setlocale(LC_ALL, "Portuguese");
    compfib();

    return 0;
}


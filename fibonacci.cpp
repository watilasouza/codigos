#include <stdio.h>
#include <locale.h>

void compfib(){
	int num,aux,term1=0,term2=1;
	printf("Digite um n�mero: ");
      scanf("%d", &num);

    while (term2 < num) {
        aux = term1;
        term1=term2;
        term2=term2+aux;
    }

    if (term2 == num) {
        printf("O n�mero %d pertence � sequ�ncia de Fibonacci!\n", num);
    } else {
        printf("O n�mero %d n�o pertence � sequ�ncia de Fibonacci.\n", num);
    }
	
	
}

int main() {
    setlocale(LC_ALL, "Portuguese");
    compfib();

    return 0;
}


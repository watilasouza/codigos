#include <stdio.h>
#include<string.h>
#include <locale.h>

void invertestring(){
char string[100];
int i,tam,fim,aux;
   
   printf("Dê uma string de no máximo 100 caracteres que deseja inverter:\n");
      gets(string);
      tam=strlen(string);
      fim=tam-1;
  for(i=0;i<tam/2;i++){
	 aux=string[i];
	 string[i]=string[fim];
	 string[fim]=aux;
	 fim--;
	}
   printf("%s",string);  
}
int main(){
setlocale(LC_ALL, "Portuguese");
	
invertestring();

return 0;
}

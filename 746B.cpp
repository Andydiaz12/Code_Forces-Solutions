#include <cstdio>
#include <cstdlib>
using namespace std;

const int maxn = 2e3 + 10;

int main() {
	
	int n, valor_izq, valor_der, bandera_izq, bandera_der;
	char cadena[maxn], cadena_copia[maxn];
	
	scanf("%d", &n);
	scanf("%s", cadena);
	
	bandera_izq = 0;
	bandera_der = valor_der = n-1;
	valor_izq = n-2;
	
	if(n%2 == 1){
		cadena_copia[n/2] = cadena[0];
	}
	while(valor_izq >= 0){
		
		cadena_copia[bandera_izq] = cadena[valor_izq];
		bandera_izq++;
		valor_izq-=2;
		cadena_copia[bandera_der] = cadena[valor_der];
		bandera_der--;
		valor_der-=2;
		
		
	}
	
 	cadena_copia[n++] = '\0';
	
	printf("%s\n", cadena_copia);
	
	return 0;
}
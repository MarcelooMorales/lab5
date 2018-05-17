//se inicia las ligrerias stdio.h y stdlib.h
//declaro la variable numero
//declaro n
//muestro en pantalla para que ingrese el numero natural
//guardo el numero ingresado
//retorno



#include <stdio.h>
#include <stdlib.h>

int numero(){
	int n;
	printf("Ingrese un numero natural:\n");
	scanf("%d",&n);
	return n;
}

int suma_cifras(int n){
	int suma=0,resto;
	while(n!=0){
		resto=(n%10);
		suma=(suma+resto);
		n=(n/10);

	}
		return suma;
}


int main(){
	int num,suma;
	num = numero();
	while (num>9){
		num = suma_cifras(num);
	}
	printf("La raiz digital es %d",num);
	return 0;
}

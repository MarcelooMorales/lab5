//inicio con las dos librerias stdio.h y stdlib.h
//inicio con la variable numero_azar_a y con variable na
//na se iguala a rand mas el 100%+1 para tirar un numero aleatorio
//lo mismo con el numero al azar b
//


#include<stdio.h>
#include<stdlib.h>

int numero_azar_a(){
	int na;
	na = (rand() %100)+1;
	return na;
}
int numero_azar_b(){
	int nb;
	nb=(rand() %100)+1;
	return nb;
}
void
Game_apuesta (){
	int x, y;
	int i=0, j=0;
	char letra;
	char tecla='S';

	while (tecla=='S' || tecla=='s'){
		printf("Apuestas por A o por B \n");
		scanf (" %c", &letra);

		x= numero_azar_a();
		y= numero_azar_b();

	printf("el numero A obtiene un: %d \n", x);
	printf("el numero B obtiene un: %d \n", y);

		if(letra=='A' || letra=='a' && x>y){
			printf("TU GANASTE!!!  \n");
			i++;
		}
		if (letra=='B' || letra=='b' && y>x){
			printf("TU GANASTE!!! \n");
			i++;
		}
		if (letra=='A' && y>x){
			printf("TU GANASTE!!! \n");
			j++;
		}
		if (letra=='B' && x>y){
			printf("TU GANASTE!!! \n");
			j++;
		}
		printf("llevas un total de : %d partidas ganadas \n", i);
		printf("y un total de : %d partidas perdidas \n", j);

		printf("Quieres apostar otra vez? (S/N) \n");
		scanf(" %c", &tecla);
		if (tecla=='N' || tecla=='n'){
			break;
		}
	}
}
int main (){
	srand(time(NULL));
	printf("bienvenido a la maquina  \n");
	Game_apuesta ();
	return 0;
}

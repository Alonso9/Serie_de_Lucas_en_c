/*
* Programa para obtener la serie de lucas usando recursion
* Autor: Giron Peregrina Ramon Alonso
* Github link: https://github.com/Alonso9/Serie_de_Lucas_en_c
**/


#include <stdio.h> //Biblioteca estandar de entrdas y salidas de C


/*
* Funcion para obtener la serie de Lucas
* mediante 5 parametros
* Usando recursion
*/
int lucas(int a, int b, int c, int n, int cont){ //Parametros pasados
	
	//Condicional para evaluar un numero mayor que cero y su respectivo funcionamiento
	if(n > 0)	{
		printf("%d\t\t%d\n",cont,a); //Imprimimos los valores de la serie y su posicion
		c = a + b; //Guardamos la suma de a y b en c
		a = b;     //Guardamoss  b en a
		b = c;     //guardamos c en b
		lucas(a,b,c,n-1,cont+1); //Hacemos uso de la recursividad con n decreciedo para la serie y cont para estetica el progrma  (valor del indice)
	}else if(n < 0){ //N es menor a 0 cero entoces un mensaje de advertencai que solo positivos enteros
		//system("clear");
		printf("Numero invalido: %d\n",n);
		printf("Por favor ingrese numeros enteros positivos (osea numeross mayores que Cero)!\n");
	}
}

/*Programa principal donde llamamos a las funciones requeridas para el correcto funcionamiento del sistema*/
int main(){
	/*Variables a usar se pueden declarar en la funcion y evitar paso de parametros pero mi forma de programar es de psasar parametros*/
	int a = 2, b = 1, c = 1, n = 0,cont = 1;

	printf("EN caso de ingresar numeros decimales el program trunca el valor al entero en si, ejemplo 8.9 lo toma como 8 y 8.2 como 8\n\n\n");

	printf("Ingrese total de los valores de la serie: "); //Pedimos el valor de la serie
	scanf("%d",&n);

	printf("\n\nIndice[i]\t Serie de Lucas[L]\n"); //Estetica del programa valor del indice y valor de la serie

	lucas(a,b,c,n,cont); //Llamamos a la funcion y pasamos los parametros

	return 0;
} //Fin de la funcion principal
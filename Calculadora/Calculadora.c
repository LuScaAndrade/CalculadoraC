#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<locale.h>

int main(void){

	setlocale(LC_ALL, "Portuguese");
	
	int codigo,verificador = 0;;
	float num1,num2,result;
	
	printf ("CALCULADORA");
	printf ("\n\nBem-vindo(a) � calculadora!");
	printf ("\n---------------------------------------------------------------------");
	printf ("\nEspecifica��o   \t\t\tC�digo");
	printf ("\n- Adi��o   \t\t\t\t  1");
	printf ("\n- Subtra��o   \t\t\t\t  2");
	printf ("\n- Divis�o   \t\t\t\t  3");
	printf ("\n- Multiplica��o   \t\t\t  4");
	printf ("\n- Finalizar o programa \t\t\t  5");
	printf ("\n---------------------------------------------------------------------");
	printf ("\n\nDigite o c�digo de acordo com a opera��o que deseja realizar: ");
	scanf ("%i", &codigo);

	do {
		switch (codigo) {
			case 1: 
				printf ("\nInsira o primeiro n�mero: ");
				scanf ("%f", &num1);
				printf ("\nInsira o primeiro n�mero: ");
				scanf ("%f", &num2);
			
				result = num1 + num2;
			
				printf ("\nResultado:%0.2f", result);
				printf ("\n---------------------------------------------------------------------");
				printf ("\nDeseja realizar outra opera��o?");
				printf ("\n1 - Sim \t2 - n�o\n");
				scanf ("%i", &verificador);
					if (verificador == 2) {
						break;
					}
				printf ("\nDigite o c�digo de acordo com a opera��o que deseja realizar: ");
				scanf ("%i", &codigo);
			break;
		
			case 2:
				printf ("\nInsira o primeiro n�mero: ");
				scanf ("%f", &num1);
				printf ("\nInsira o primeiro n�mero: ");
				scanf ("%f", &num2);
			
				result = num1 - num2;
			
				printf ("\nResultado:%0.2f", result);
				printf ("\n---------------------------------------------------------------------");
				printf ("\nDeseja realizar outra opera��o?");
				printf ("\n1 - Sim \t2 - n�o\n");
				scanf ("%i", &verificador);
					if (verificador == 2) {
						break;
					}
				printf ("\nDigite o c�digo de acordo com a opera��o que deseja realizar: ");
				scanf ("%i", &codigo);
			break;
		
			case 3:
				printf ("\nInsira o primeiro n�mero: ");
				scanf ("%f", &num1);	
				printf ("\nInsira o primeiro n�mero: ");
				scanf ("%f", &num2);
				if (num2 != 0) {
					result = num1 / num2;
					printf ("\nResultado:%0.2f", result);
					printf ("\n---------------------------------------------------------------------");
				}
				else {
					printf ("\nN�o � poss�vel dividir por zero!");
					printf ("\n---------------------------------------------------------------------");
				}			
				printf ("\nDeseja realizar outra opera��o?");
				printf ("\n1 - Sim \t2 - n�o\n");
				scanf ("%i", &verificador);
					if (verificador == 2) {
						break;
					}
				printf ("\nDigite o c�digo de acordo com a opera��o que deseja realizar: ");
				scanf ("%i", &codigo);
			break;
		
			case 4:
				printf ("\nInsira o primeiro n�mero: ");
				scanf ("%f", &num1);
				printf ("\nInsira o primeiro n�mero: ");
				scanf ("%f", &num2);
			
				result = num1 * num2;
			
				printf ("\nResultado:%0.2f", result);
				printf ("\n---------------------------------------------------------------------");
				printf ("\nDeseja realizar outra opera��o?");
				printf ("\n1 - Sim \t2 - n�o\n");
				scanf ("%i", &verificador);
					if (verificador == 2) {
						break;
					}
				printf ("\nDigite o c�digo de acordo com a opera��o que deseja realizar: ");
				scanf ("%i", &codigo);
			break;
		
			case 5:
				
			break;
		
			default:
				printf ("\nOpera��o Inv�lida!");
			break;
		}
	
	} while (verificador == 1);
	
	printf ("\nPrograma Finalizado!");
	
	return 0;
}

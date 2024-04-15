#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<locale.h>

int main(void){

	setlocale(LC_ALL, "Portuguese");
	
	int codigo,verificador = 0;;
	float num1,num2,result;
	
	printf ("CALCULADORA");
	printf ("\n\nBem-vindo(a) à calculadora!");
	printf ("\n---------------------------------------------------------------------");
	printf ("\nEspecificação   \t\t\tCódigo");
	printf ("\n- Adição   \t\t\t\t  1");
	printf ("\n- Subtração   \t\t\t\t  2");
	printf ("\n- Divisão   \t\t\t\t  3");
	printf ("\n- Multiplicação   \t\t\t  4");
	printf ("\n- Finalizar o programa \t\t\t  5");
	printf ("\n---------------------------------------------------------------------");
	printf ("\n\nDigite o código de acordo com a operação que deseja realizar: ");
	scanf ("%i", &codigo);

	do {
		switch (codigo) {
			case 1: 
				printf ("\nInsira o primeiro número: ");
				scanf ("%f", &num1);
				printf ("\nInsira o primeiro número: ");
				scanf ("%f", &num2);
			
				result = num1 + num2;
			
				printf ("\nResultado:%0.2f", result);
				printf ("\n---------------------------------------------------------------------");
				printf ("\nDeseja realizar outra operação?");
				printf ("\n1 - Sim \t2 - não\n");
				scanf ("%i", &verificador);
					if (verificador == 2) {
						break;
					}
				printf ("\nDigite o código de acordo com a operação que deseja realizar: ");
				scanf ("%i", &codigo);
			break;
		
			case 2:
				printf ("\nInsira o primeiro número: ");
				scanf ("%f", &num1);
				printf ("\nInsira o primeiro número: ");
				scanf ("%f", &num2);
			
				result = num1 - num2;
			
				printf ("\nResultado:%0.2f", result);
				printf ("\n---------------------------------------------------------------------");
				printf ("\nDeseja realizar outra operação?");
				printf ("\n1 - Sim \t2 - não\n");
				scanf ("%i", &verificador);
					if (verificador == 2) {
						break;
					}
				printf ("\nDigite o código de acordo com a operação que deseja realizar: ");
				scanf ("%i", &codigo);
			break;
		
			case 3:
				printf ("\nInsira o primeiro número: ");
				scanf ("%f", &num1);	
				printf ("\nInsira o primeiro número: ");
				scanf ("%f", &num2);
				if (num2 != 0) {
					result = num1 / num2;
					printf ("\nResultado:%0.2f", result);
					printf ("\n---------------------------------------------------------------------");
				}
				else {
					printf ("\nNão é possível dividir por zero!");
					printf ("\n---------------------------------------------------------------------");
				}			
				printf ("\nDeseja realizar outra operação?");
				printf ("\n1 - Sim \t2 - não\n");
				scanf ("%i", &verificador);
					if (verificador == 2) {
						break;
					}
				printf ("\nDigite o código de acordo com a operação que deseja realizar: ");
				scanf ("%i", &codigo);
			break;
		
			case 4:
				printf ("\nInsira o primeiro número: ");
				scanf ("%f", &num1);
				printf ("\nInsira o primeiro número: ");
				scanf ("%f", &num2);
			
				result = num1 * num2;
			
				printf ("\nResultado:%0.2f", result);
				printf ("\n---------------------------------------------------------------------");
				printf ("\nDeseja realizar outra operação?");
				printf ("\n1 - Sim \t2 - não\n");
				scanf ("%i", &verificador);
					if (verificador == 2) {
						break;
					}
				printf ("\nDigite o código de acordo com a operação que deseja realizar: ");
				scanf ("%i", &codigo);
			break;
		
			case 5:
				
			break;
		
			default:
				printf ("\nOperação Inválida!");
			break;
		}
	
	} while (verificador == 1);
	
	printf ("\nPrograma Finalizado!");
	
	return 0;
}

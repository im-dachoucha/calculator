#include <stdio.h>

/********************** MODIFY README FILE *****************************/

/*
	Todo:
		1 -> aritmethic operations
			.prompt user operations to choose from, then ask him for two numbers.
			.if the operation input doesn't match the choices given, reprompt him to same operations menu with a warning message.
			.add cancelation key.
*/

float addTwoNbrs(float nbr1, float nbr2) { return nbr1 + nbr2; }
float subTwoNbrs(float nbr1, float nbr2) { return nbr1 - nbr2; }
float multTwoNbrs(float nbr1, float nbr2) { return nbr1 * nbr2; }
float divTwoNbrs(float nbr1, float nbr2) { return nbr1 / nbr2; }
int twoNbrsModulus(int nbr1, int nbr2) { return nbr1 % nbr2; }

void main(){
	int operation, n1, n2, menu=-1;
	float nbr1, nbr2;
	while(menu < 0){
		operation=n1=n2=0;
		nbr1=nbr2=0;
		printf("**********Menu**********\n\n");
		printf("What kind of operations would like to perform ?\n");
		printf("1 -> Arithmetic operations\n");
		printf("0 -> Quit\n");
		printf("Your choice : ");
		scanf("%d", &menu);
		
		if(menu == 1){
			system("cls");
			while(operation < 1 || operation > 5){
				printf("Choose the operation to performe:\n");
				printf("1 -> Addition\n");
				printf("2 -> Substraction\n");
				printf("3 -> Multiplication\n");
				printf("4 -> Division\n");
				printf("5 -> Modulus\n");
				printf("0 -> Quit\n\n");
				printf("Your choice : ");
				scanf("%d", &operation);
			}
			
			if(operation != 5){	
				printf("Enter the first number : ");
				scanf("%f", &nbr1);
				printf("Enter the second number : ");
				scanf("%f", &nbr2);
			}
			else {
				printf("Enter the first number : ");
				scanf("%d", &n1);
				printf("Enter the second number : ");
				scanf("%d", &n2);
			}
						
			switch(operation){
				case 1:
					printf("%.3f + %.3f = %.3f", nbr1, nbr2, addTwoNbrs(nbr1, nbr2));
					break;
				case 2:
					printf("%.3f + %.3f = %.3f", nbr1, nbr2, subTwoNbrs(nbr1, nbr2));
					break;
				case 3:
					printf("%.3f + %.3f = %.3f", nbr1, nbr2, multTwoNbrs(nbr1, nbr2));
					break;
				case 4:
					if(nbr1) printf("%.3f + %.3f = %.3f", nbr1, nbr2, divTwoNbrs(nbr1, nbr2));
					else printf("nbr1 can't be null!!!");
					break;
				case 5:
					printf("%d %% %d = %d", n1, n2, twoNbrsModulus(n1, n2));
					break;
			}
		}
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}

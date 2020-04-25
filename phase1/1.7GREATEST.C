#include<stdio.h>
#include<conio.h>
void main(){
	int peg1, peg2, peg3;
	clrscr();
	printf("Make a drink: ");
	scanf("%d", &peg1);
	printf("Make another dring: ");
	scanf("%d", &peg2);
	printf("One more please: ");
	scanf("%d", &peg3);
	if(peg1>peg2 && peg1>peg3){
		printf("peg1 is largest");
	}
	else if(peg2>peg1 && peg2>peg3){
		printf("peg2 is largest");
	}
	else if(peg3>peg1 && peg3>peg2){
		printf("peg3 is largest");
	}

	getch();
}
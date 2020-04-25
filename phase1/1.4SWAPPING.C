#include<stdio.h>
#include<conio.h>
void main(){
	char *glass1, *glass2, *glasstemp;
	clrscr();
	glass1="beer";
	glass2 = "vodka";
	glasstemp = glass1;
	glass1 = glass2;
	glass2 = glasstemp;
	printf("Printing glass1 = ");
	puts(glass1);
	printf("Printing glass2 = ");
	puts(glass2																																															       );
	getch();
}
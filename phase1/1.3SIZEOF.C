#include<stdio.h>
#include<conio.h>
void main(){
	int iv;
	float fv;
	double dv;
	char cv;
	clrscr();
	printf("Size of int variabel = %d bytes\n", sizeof(iv));
	printf("Size of float variabel = %d bytes\n", sizeof(fv));
	printf("Size of double variabel = %d bytes\n", sizeof(dv));
	printf("Size of char variabel = %d bytes", sizeof(cv));
	getch();
}
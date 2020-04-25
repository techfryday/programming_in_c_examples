#include<stdio.h>
#include<conio.h>
void main(){
	int no, i;
	clrscr();
	printf("Enter number: ");
	scanf("%d", &no);
	for(i=1;i<=10;i++){
		printf("%d\n", no*i);
	}
	getch();
}
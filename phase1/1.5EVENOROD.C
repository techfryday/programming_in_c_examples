#include<stdio.h>
#include<conio.h>
void main(){
	int theNum;
	clrscr();
	printf("Enter a  number: ");
	scanf("%d", &theNum);
	if(theNum % 2 == 0){
		printf("%d is even!", theNum);
	}
	else{
		printf("%d is odd!", theNum);
	}
	getch();
}
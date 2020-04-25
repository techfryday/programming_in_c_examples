#include<stdio.h>
#include<conio.h>
void main(){
	int dividend, divisor, quotient, remainder;
	clrscr();
	printf("Enter divident value: ");
	scanf("%d", &dividend);
	printf("Enter divisor value: ");
	scanf("%d", &divisor);

	// '/' division operator returns quotient
	quotient = dividend / divisor;

	// '%' mod operator returns remainder
	remainder = dividend % divisor;

	printf("Quotient= %d\n", quotient);
	printf("Remainder= %d", remainder);



	getch();
}
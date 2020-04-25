#include<stdio.h>
#include<conio.h>
void main(){
	int i, n, count=0;
	clrscr();
	printf("Enter a number: ");
	scanf("%d", &n);
	while(n!=0){
		n = n/10;
		count++;
	}
	printf("your no has %d digits", count);
	getch();
}
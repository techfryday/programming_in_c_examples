#include<stdio.h>
#include<conio.h>
void main(){
	int i, limit, sum=0;
	clrscr();
	printf("Enter limit: ");
	scanf("%d", &limit);
	for(i=1;i<=limit;i++){
		sum = sum + i;
	}
	printf("Sum = %d", sum);
	getch();
}
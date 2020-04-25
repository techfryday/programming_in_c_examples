#include<stdio.h>
#include<conio.h>
void main(){
	int i, n, current=0, next1=1, nextFinal;
	clrscr();
	printf("Enter a number: ");
	scanf("%d", &n);
	for(i=1;i<=n;i++){
		printf("%d\n", current);
		nextFinal = current+next1;
		current = next1;
		next1 = nextFinal;
	}
	getch();
}

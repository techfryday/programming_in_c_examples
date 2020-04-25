#include<stdio.h>
#include<conio.h>
void main(){
	int base, expo, i, res=1;
	clrscr();
	printf("Enter base and expo: ");
	scanf("%d %d", &base, &expo);
	for(i=1;i<=expo;i++){
		res = res*base;
	}
	printf("res = %d", res);
	getch();
}
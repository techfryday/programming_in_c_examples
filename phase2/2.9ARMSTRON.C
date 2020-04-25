#include<stdio.h>
#include<conio.h>
void main(){
	int n, res=0, temp, remainder;
	clrscr();
	printf("Enter a number: ");
	scanf("%d", &n);
	temp = n;
	while(n!=0){
		remainder = n%10;
		res += remainder*remainder*remainder;
		n = n / 10;
	}
	if(temp==res){
		printf("%d is armstrong number!", temp);
	}
	else{
		printf("%d is not armstrong number!", temp);
	}
	getch();
}
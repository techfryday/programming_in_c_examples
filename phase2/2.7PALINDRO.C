#include<stdio.h>
#include<conio.h>
void main(){
	int n, rev = 0, remainder, temp;
	clrscr();
	printf("Enter a number: ");
	scanf("%d", &n);
	temp=n;
	while(n!=0){
		remainder = n % 10;
		rev = rev*10+remainder;
		n = n/10;
	}
	if(rev==temp){
		printf("As %d == %d, the number %d is palindrome!", rev, temp, temp);
	}
	else{
		printf("As %d != %d, the number %d is not palindrome!", rev, temp, temp);
	}
	getch();
}
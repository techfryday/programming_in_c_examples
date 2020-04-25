#include<stdio.h>
#include<conio.h>
#include<math.h>
void main(){
	double a, b, c, r1, r2, dis, rv, iv;
	clrscr();
	printf("Coefficient of a: ");
	scanf("%lf", &a);
	printf("Coefficient of b: ");
	scanf("%lf", &b);
	printf("Coefficient of c: ");
	scanf("%lf", &c);
	dis == b*b-4*a*c;
	if(dis>0){
	 root1 = (-b + sqrt(dis))/2*a;
	 root2 = (-b - sqrt(dis))/2*a;
	}
	else if(dis==0){
	 root1 = root2 = -b / (2*a);
	}
	else{
	 rv = -b/(2*a);
	 iv = sqrt(-dis)/(2*a);
	 printf("root1 = %.2lf+%.2lfi\n", rv, iv);
	 printf("root2 = %.2lf-%.2lfi", rv, iv);
	}
	getch();
}
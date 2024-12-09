#include<stdio.h>
int tinhTong(int a, int b){
	int sum = a+b;
	return sum;
}
int main (){
	int a,b;
	printf("please you enter number1 :");
	scanf("%d",&a);
	printf("please you enter number 2: ");
	scanf("%d",&b);
	int sum =tinhTong(a,b);
	printf("Tong cua hai so = %d",sum);
	
	return 0;
}

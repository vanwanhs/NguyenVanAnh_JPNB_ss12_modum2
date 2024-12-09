#include<stdio.h>
int check(int n){
	if(n<0) return -1;
	int sum;
	for(int i=1;i<n;i++){
		if(n%i==0){
			sum+=i;
		}
		if(sum==n) return 1;
	}
	return -1;
}
int main (){
	int a,b;
	printf("Moi ban nhap vao so nguyen thu 1: ");
	scanf("%d",&a);
	printf("Moi ban nhap vao so nguyen thu 2: ");
	scanf("%d",&b);
	if(check(a)==-1){
		printf("False");
		printf("\n");
	} else {
		printf("True");
		printf("\n");
	}
	if(check(b)==-1){
		printf("False");
		printf("\n");
	} else {
		printf("True");
		printf("\n");
	}
	return 0;
}

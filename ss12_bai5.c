#include<stdio.h>
int kiem_tra(int n){
	if(n<=1) return -1;
	for(int i=2;i*i<=n;i++){
		if(n%i==0) return -1;
	}
	return 1;
}
int main (){
	int a,b;
	printf("Moi ban nhap so a ");
	scanf("%d",&a);
	printf("Moi ban nhap so b ");
	scanf("%d",&b);
	if(kiem_tra(a)==-1){
		printf("So %d khong phai la so nguyen to \n",a);
	} else {
		printf("So %d nay la so nguyen to \n",a);
	}
	if(kiem_tra(b)==-1){
		printf("So %d khong phai la so nguyen to\n",b);
	} else {
		printf("So %d nay la so nguyen to\n",b);
	}
	return 0;
}



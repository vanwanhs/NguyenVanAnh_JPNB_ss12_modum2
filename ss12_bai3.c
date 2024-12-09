#include<stdio.h>
long long giai_thua(int n){
	if(n<0) return 0;
	long long result=1;
	for(int i=1;i<=n;i++){
 	    result*=i;
	}
	return result;
}
int main (){
	int n;
	printf("Moi ban nhap so tu nhien: ");
	scanf("%d",&n);
	long long result=giai_thua(n);
	if (result==0){
		printf("So tu nhien ban nhap khong hop le\n");
	} else {
		printf("Giai thua cua %d la %d",n,giai_thua(n));
	}
	return 0;
}


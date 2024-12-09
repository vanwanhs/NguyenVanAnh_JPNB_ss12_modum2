#include<stdio.h>
int sreachMax(int arr[],int length){
	if (length<0) return -1;
	int max=arr[0];
	for(int i=0;i<length;i++){
		if(arr[i]>max){
			max=arr[i];
		}
	}
	return max;
}
int main (){
	int length;
	int arr[100];
	printf("Moi ban nhap do dai cua mang :");
	scanf("%d",&length);
	for(int i =0;i<length;i++){
		printf("array[%d] = ",i);
		scanf("%d",&arr[i]);
	}
	int max=sreachMax(arr,length);
	if(max==-1){
		printf("Khong hop le!");
	} else {
		printf("Phan tu %d lon nhat trong mang",max);
	}
	return 0;
}

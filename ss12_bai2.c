#include<stdio.h>
void printfArray(int array[],int n){
	printf("Cac phan tu co trong mang: ");
	for (int i=0;i<n;i++){
		printf("%d ",array[i]);
	}
} 
    return printfArray;
int main (){
	int n;
	int array[100];
	printf("Moi ban nhap do dai cua mang: ");
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		printf("arr[%d]= ",i);
		scanf("%d",&array[i]);
	}
	printfArray(array,n);
	return 0;
}

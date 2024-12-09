#include<stdio.h>
void change(int arr[][100], int *num1, int *num2){
	//int arr[100][100];
	if(*num1>0 && *num2>0){
	    printf("Mang %d * %d:\n",*num1,*num2);
	    for(int i=0;i<*num1;i++){
		for (int j=0;j<*num2;j++){
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	    }
	} else {
		printf("Khong hop le!");
	}
}
int main(){
	int row,col;
	int arr[100][100];
	printf("Moi ban nhap hang cua mang: ");
	scanf("%d",&row);
	printf("Moi ban nhap cot cua mang: ");
	scanf("%d",&col);
	for(int i=0;i<row;i++){
		for (int j=0;j<col;j++){
			printf("array[%d][%d]",i,j);
			scanf("%d",&arr[i][j]);
		}
	}
	change(arr,&row,&col);
	return 0;
}

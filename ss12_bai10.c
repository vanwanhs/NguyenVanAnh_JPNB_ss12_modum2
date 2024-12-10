#include<stdio.h>
void menu(void){
	printf("------Menu------\n");
	printf("1.Nhap mang va cac phan tu co trong mang\n");
	printf("2.In ra cac phan tu trong mang dang quan li\n");
	printf("3.Them phan tu vao vi tri chi dinh\n");
	printf("4.Sua phan tu tai vi tri chi dinh\n");
	printf("5.Xoa phan tu tai vi tri chi dinh\n");
	printf("6.Xap xep mang\n a,Tang dan\n b,Giam dan\n");
	printf("7.Tim kiem phan tu \na,Tuyen tinh \nb,Nhi phan\n");
	printf("8.Thoat\n");
}
void nhapMang(int array[100],int *n){
	if(*n>0){
		for(int i=0; i<*n; i++){
			printf("array[%d]",i);
			scanf("%d",&array[i]);
		}
	} else {
		printf("Moi ban nhap lai do dai mang\n");
	}
}
void inMang(int array[],int *n){
	if(*n>0){
		printf("Phan tu co trong mang:\n");
		for(int i=0;i<*n;i++){
			printf("array[%d]= %d\n",i,array[i]);
		}
	} else {
		printf("Moi ban nhap lai do dai cua mang");
	}
}
void add(int array[],int *n, int *addnumber, int *position){
	if(*n>0){
		if(*position>=0 && *position <= *n){
			*n=*n+1;
			for(int i=*n-1;i>*position;i--){
				array[i]=array[i-1];
			}
		array[*position]=*addnumber;
		}
		if(*position>0 && *position>*n){
			*n=*position+1;
			for(int i=*position;i<*n;i++){
				array[i]=array[i+1];
			}
		array[*position]=*addnumber;
		}
		printf("Mang sau khi them phan tu\n");
		for(int i=0;i<*n;i++){
			printf("%d",array[i]);
			printf("\n");
		}
		
	} else {
		printf("Moi ban nhap lai\n");
	}
}
void suaMang(int array[][100], int *n, int *number, int *place){
	if(*n>0 && *place<*n){
		array[*place]=*number;
	}
	printf("Mang sau khi duoc thay doi:\n"){
		
	}
}
int main(){
	int choice;
	int array[100];
	int n=0,addnumber,position;
	do{
		menu();
		printf("Lua chon cua ban ");
		scanf("%d",&choice);
		switch(choice){
			case 1:
				printf("please you enter the length of array ");
				scanf("%d",&n);
				nhapMang(array,&n);
				break;
			case 2:
				inMang(array,&n);
				break;
			case 3:
				printf("Moi ban nhap tu ma ban muon them \n");
				scanf("%d",&addnumber);
				printf("Moi ban nhap vi tri ma ban muon them \n");
				scanf("%d",&position);
				add(array, &n, &addnumber, &position);
				break;
			case 4:
				
				break;
			case 5:
				break;
			case 6:
				break;
			case 7:
				break;
			case 8:
				break;
			default:
				printf("Khong hop le!\n");
		}
	}while(choice!=8);
	return 0;
}

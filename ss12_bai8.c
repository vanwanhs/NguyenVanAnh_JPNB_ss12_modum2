#include <stdio.h>
int ucln(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
	if (a < 0){
    return -a;
    } else {
    return a;
    }
}
int main(){
    int so1, so2;
    printf("Nhap so nguyen thu nhat: ");
    scanf("%d", &so1);
    printf("Nhap so nguyen thu hai: ");
    scanf("%d", &so2);
    printf("Uoc nguyen lon nhat cua so %d va %d la %d", so1, so2, ucln(so1, so2));
    return 0;
}


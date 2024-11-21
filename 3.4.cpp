#include <stdio.h>
int main()
{
	float toan,van,anh,tb;
	 printf("nhap diem toan: ");
	scanf("%f", &toan);
	printf("nhap diem van: ");
	scanf("%f", &van);
	printf("nhap diem anh: ");
	scanf("%f", &anh);
	tb= (toan + van + anh) / 3;
	printf("%f", tb);
	
	return 0;
}

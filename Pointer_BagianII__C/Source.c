#include <stdio.h>
#include <conio.h>

int main() {
	float a;
	float* p;

	a = 2.6;
	p = &a;		//Variabel p berisi alamat variabel a

	printf("%f\n", a);

	*p = 4.2;	//Kita ubah nilai variabel a;
	printf("%f\n", a);

	_getch();
	return 0;
}

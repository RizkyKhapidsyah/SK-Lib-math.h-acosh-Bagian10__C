// crt_acosh.c
// Compile by using: cl /W4 crt_acosh.c
// This program displays the hyperbolic cosine of pi / 4
// and the arc hyperbolic cosine of the result.

#include <stdio.h>
#include <math.h>
#include <conio.h>

/*	Source by Microsoft
	Modified For Learn by Rizky Khapidsyah
	I.D.E : VS2019 */

int main(void) {
	double pi = 3.1415926535;
	double x, y;

	x = cosh(pi / 4);
	y = acosh(x);

	printf("cosh( %f ) = %f\n", pi / 4, x);
	printf("acosh( %f ) = %f\n", x, y);

	_getch();
	return 0;
}
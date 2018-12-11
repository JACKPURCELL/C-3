#include <stdio.h>
int main (void)
{
	double num1, num2;
	char a;

	printf ("Enter an expression: ");
	scanf ("%lf", &num1);
	while (1) {
		a = getchar();
		if (a == '\n') break;
		scanf ("%lf", &num2);
		switch (a) {
			case '+':
				num1 = num1 + num2;
				break;
			case '-':
				num1 = num1 - num2;
				break;
			case '*':
				num1 = num1 * num2;
				break;
			case '/':
				num1 = num1 / num2;
				break;
		}

	}
	printf ("Value of expression: %g\n", num1);
	return 0;
}



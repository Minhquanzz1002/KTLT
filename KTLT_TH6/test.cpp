#include<stdio.h>

int main() {
	int a, b;
	char c;
    printf("Nhap a, c , b: ");
	scanf("%d %c %d", &a, &c, &b);
	switch (c) {
	case '+':
		printf("%d", a + b);
	case '-':
		printf("%d", a - b);

	case '*':
		printf("%d", a * b);

	case '/':
		printf("%d", a / b);
    case '0':
        break;
	}
	return 0;
}
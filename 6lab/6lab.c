#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
void main() {
	setlocale(LC_ALL, "RUS");
	float x, y;
	printf("Введите координаты x, y:\n");
	scanf("%f", &x);
	scanf("%f", &y);
	printf(
		"              y               \n"
		"              ^               \n"
		"  +-----------+-----------+   \n"
		"  |           |           |   \n"
		"  |           |           |   \n"
		"  |     +-----+-----+     |   \n"
		"  |     |     |     |     |   \n"
		"--+-----+-----------+-----+->x\n"
		" -5    -2     0     2     7   \n"
	);
	int in_outer = (x >= -5.0f && x <= 7.0f && y >= 0.0f && y <= 5.0f);
	int in_hole = (x > -2.0f && x < 2.0f && y > 0.0f && y < 2.0f);
	if (in_outer && !in_hole) {
		printf("Точка (%.2f, %.2f) ПРИНАДЛЕЖИТ заштрихованной области.\n", x, y);
	}
	else {
		printf("Точка (%.2f, %.2f) НЕ ПРИНАДЛЕЖИТ заштрихованной области.\n", x, y);
	}
	return 0;
}
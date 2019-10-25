#include <stdio.h>

int main(int argc, char *argv[]) {
	int x = 3;
	x = x * 5;
	int y = x;
	x = 3;
	x = x / 2;
	x = y - x;
	printf("%d", x);
	return 0;
}
// Some arithmetic computation
// prints -> 14
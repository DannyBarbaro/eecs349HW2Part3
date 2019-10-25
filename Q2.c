#include <stdio.h>

int main(int argc, char *argv[]) {
	int i = 0;
	int max = 0;
	while (i <= 7) {
		if (argv[i] >  max) {
			max = argv[i];
		}
		 i++;
	}
	printf("%d", max);
	return 0;
}
// A loop to find the max value of an array
// prints -> 432
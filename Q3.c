#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int a = 100;
	int b = 0;
  int c = 0;
  int d = 0;
	while(a <= 999) {
		b = a / 100;
    c = b *- 100;
		c += a;
    c = c / 10;
		d = a % 10;
		if(b*b*b + c*c*c + d*d*d == a ){
			printf("%d", a);
		}
		a++;
	}
	return 0;
}
// this appears to just be arithmetic
// prints -> 153, 370, 371, 407

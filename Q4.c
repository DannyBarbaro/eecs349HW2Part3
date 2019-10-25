#include <stdio.h>
int arr[100];


int proc1(int *result, int y, int x) {
	int a = 0;
	int b = 0;
	int c = 0;
	int i = 0;
	while(c < y) {
		i = 1;
		while(i < x) {
			result += arr[a];
			if (result != 0) {
				i++;
			}
			a++;
			a = a % y;
		}
		result += arr[a];
		if(arr[a] == 0) {
			a++;
			a = a % y;
		} 
		result += arr[a];
		b = *result;
		result += arr[a];
		c++;

	}
	return result;
}
int main(int argc, char *argv[]) {
	int x = 7;
	int y = 100;
	int i = 0;
	while(i <  y) {
		arr[i] = i;
		i++;
	}
	int *result = 0;
	result = proc1(result, y, x);
	printf("%d", result);
}

// This does some arithmetic and returns a result
// prints -> 178800
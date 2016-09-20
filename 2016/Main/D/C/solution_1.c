// author: DestructHub team 2016

#include <stdio.h>

int main(){
	int a = 0, b = 0, c = 0, d = 0;
	int N = -1;
	long int i = 0;

	scanf("%i %i %i %i", &a, &b, &c, &d);

	if (a != b) {
		for(i = a; i <= 1000000000; i+=a) {
			if(i % b != 0 && c % i == 0 && d % i != 0) {
				N = (int) i;
				break;
			}
		}
	}

	printf("%d\n", N);

	return 0;
}

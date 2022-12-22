#include <stdio.h>
#include <time.h>
int is_prime(int x) {
	int i = 2;
	for(i; i<=x/2+1; i++) {
		if (x % i == 0) {
			return 0;
		}
	}
	return 1;
}
int main() {
	time_t s;
	s = time(NULL);
	int i;
	printf("OwlyBench by Sovenok-Hacker\nCPU Benchmark\n");
	for (i;i<1000000;i++) {
		is_prime(i);
	}
	printf("Result: %d owls. :D (lower-better)\n", time(NULL)-s);
	return 0;
}

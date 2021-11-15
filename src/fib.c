#include "fib.h"

int main(int argc, char *argv[]) {
	if(argc != 2) {
		gmp_printf("Syntax Error:\n");
		gmp_printf("\tfib [NUM_VALUES]\n");

		return 1;
	}

	mpz_t n;
	if(mpz_init_set_str(n, argv[1], 10) != 0 || mpz_cmp_d(n, 0) < 0) {
		gmp_printf("Argument Error:\n");
		gmp_printf("\tArgument [NUM_VALUES] must be a whole number.\n");

		mpz_clear(n);

		return 2;
	}

	mpz_t r;
	mpz_init(r);
	fib(n, r);

	gmp_printf("Fibonacci #%Zd:\n", n);
	gmp_printf("\t%Zd\n", r);

	mpz_clear(n);

	return 0;
}

int fib(mpz_t n, mpz_t r) {
	if(!n || !r) {
		gmp_printf("Syntax Error:\n");
		gmp_printf("\tArguments [n] and [r] must be initialized.\n");

		return 1;
	}

	mpz_t n1, n2, s, i;
	mpz_init_set_ui(n1, 0);
	mpz_init_set_ui(n2, 1);
	mpz_init_set_ui(s, 0);
	mpz_init_set_ui(i, 0);

	for(mpz_set_ui(i, 0); mpz_cmp(n, i) > 0; mpz_add_ui(i, i, 1)) {
		mpz_add(s, n1, n2);
		mpz_set(n1, n2);
		mpz_set(n2, s);
	}

	mpz_set(r, n1);

	mpz_clear(n1);
	mpz_clear(n2);
	mpz_clear(s);
	mpz_clear(i);

	return 0;
}
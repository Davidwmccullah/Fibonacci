#include <gmp.h>

/// Calculates the [n]th number in the Fibonacci sequence.
/// \param n nth value to calculate
/// \param r result variable
/// \return 0 | success
///			1 | syntax error
int fib(mpz_t n, mpz_t r);
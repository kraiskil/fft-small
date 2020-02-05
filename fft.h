/* Fast Fourier Transform
 * Cooley-Tukey algorithm with 2-radix DFT
 */

#include <stdint.h>
#include <complex.h>

void fft_slow(const int* in, double complex* out, uint16_t N);

void fft(const int* in, double complex* out, uint16_t N);

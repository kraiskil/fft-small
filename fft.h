/* Fast Fourier Transform
 * Cooley-Tukey algorithm with 2-radix DFT
 */

#include <stdint.h>
#if __cplusplus
#   include <complex>
    typedef std::complex< double > cdouble;
#else
#   include <complex.h>
    typedef double complex cdouble;
#endif

void fft_slow(const int* in, cdouble* out, uint16_t N);

void fft(const int* in, cdouble* out, uint16_t N);

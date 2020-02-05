add_library(fft_small fft.c)
target_include_directories(fft_small
	PUBLIC
		# One directory higher so we can #include "fft-small/fft.h"
		# instead of #include "fft.h", which is bound to be overloaded
		$<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/..>
	)

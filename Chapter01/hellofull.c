#include <stdio.h>

#define __STDC_CONSTANT_MACROS

#ifdef  __cplusplus
extern "C" {
#endif
#include <libavutil/avutil.h>
#ifdef  __cplusplus
};
#endif

int main(int argc, char** argv) {
	av_log(NULL, AV_LOG_INFO, "Hello World\n");
	return 0;
}
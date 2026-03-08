#include <iostream>

extern "C" {
#include <libavutil/avutil.h>
}

int main(int argc, char** argv) {
	av_log(NULL, AV_LOG_INFO, "Hello World\n");
	return 0;
}
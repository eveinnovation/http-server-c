#include <libavutil/timestamp.h>
#include <libavformat/avformat.h>

int encoding(const char *output_file, AVFormatContext *output_format_context, int ret);

int decoding(const char *input_file, AVFormatContext *input_format_context,  int ret);

void streaming();
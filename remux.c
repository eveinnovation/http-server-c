#include <stdio.h>
#include "remux.h"
#include <libavutil/timestamp.h>
#include <libavformat/avformat.h>


int encoding(const char *output_file, AVFormatContext *output_format_context, int ret) {
	  printf("Encoding");
      avformat_alloc_output_context2(&output_format_context, NULL, NULL, output_file);
  if (!output_format_context) {
    fprintf(stderr, "Could not create output context\n");
    ret = AVERROR_UNKNOWN;
    goto end;
  }
  end:
   return 0;

}

int decoding(const char *input_file, AVFormatContext *input_format_context,  int ret) {
 printf("decoding");
   if ((ret = avformat_open_input(&input_format_context, input_file, NULL, NULL)) < 0) {
     fprintf(stderr, "Could not open input file '%s'", input_file);
     goto end;
   }
    if ((ret = avformat_find_stream_info(input_format_context, NULL)) < 0) {
    fprintf(stderr, "Failed to retrieve input stream information");
    goto end;
  }
end:
   return 0;
}

int verify(int argc) {
if (argc < 3) {
    printf("You need to pass at least two parameters.\n");
    return -1;
  } 
}

void streaming() {
	 printf("streaming");
}


cmake_minimum_required(VERSION 2.8.12)
project(decode_encode)

# set out direcroty
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

set(FFMPEG_DEV_ROOT /opt/ffmpeg)

# set ffmpeg develop environment
include_directories(${FFMPEG_DEV_ROOT}/include)
link_directories(${FFMPEG_DEV_ROOT}/lib)
link_directories(${FFMPEG_DEV_ROOT}/lib64)


link_libraries(
    avcodec
    avformat
    avfilter
    avdevice
    swresample
    swscale
    avutil
)

ADD_LIBRARY(remux remux.h remux.c)
ADD_EXECUTABLE(stream main.c)
TARGET_LINK_LIBRARIES(stream remux)

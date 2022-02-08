# cmake_minimum_required(VERSION 2.8.12)
cmake_minimum_required(VERSION 3.13)
project(http_server)

# set out direcroty
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

set(FFMPEG_DEV_ROOT /opt/ffmpeg)

# set ffmpeg develop environment
# include_directories(${FFMPEG_DEV_ROOT}/include)
# link_directories(${FFMPEG_DEV_ROOT}/lib)
# link_directories(${FFMPEG_DEV_ROOT}/lib64)


# link_libraries(
#     avcodec
#     avformat
#     avfilter
#     avdevice
#     swresample
#     swscale
#     avutil
# )

# ADD_LIBRARY(remux remux.h remux.c)
# ADD_EXECUTABLE(ffmpeg main.c)
ADD_EXECUTABLE(server server.c)
ADD_EXECUTABLE(client client.c)
ADD_EXECUTABLE(udp-client udp-client.c)
ADD_EXECUTABLE(udp-server udp-server.c)
# ADD_EXECUTABLE(server-file server-file.c)
# ADD_EXECUTABLE(sendfile sendfile.c)
# ADD_EXECUTABLE(client-file client-file.c)
# TARGET_LINK_LIBRARIES(server remux)

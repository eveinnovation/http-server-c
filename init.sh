echo $MY_ENV_VAR;\
DIR=build && \
rm -rf ${DIR}; \
mkdir -p ${DIR}; \
cd ${DIR} && cmake .. && cmake --build . && cd ..; \
./build/bin/stream small_bunny_1080p_60fps.mp4 small_bunny_1080p_60fps.ts 

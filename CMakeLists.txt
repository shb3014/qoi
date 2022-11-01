cmake_minimum_required(VERSION 3.16)
project(qoi)


#find_package(CURL REQUIRED)
set(CMAKE_CXX_STANDARD 14)
add_executable(qoi main.cpp)
add_executable(conv qoiconv.c qoi.c mqoiconv.c)
add_executable(mconv mqoiconv.c  qoi.c)

set(CMAKE_EXE_LINKER_FLAGS "-static")
cmake_minimum_required(VERSION 3.8)
project(algorithm)

set(CMAKE_C_STANDARD 99)
# 其中CPractise是文件家，CPractise.h是文件夹中的文件。必须指定文件所在的文件夹
# 在这个set里面，写出要编译的每个文件，不写的话，就不会被gcc编译。
set(SOURCE_FILES main.c CPractise/BasicDataStructureTypePractise.c CPractise/CPractise.h)
add_executable(algorithm ${SOURCE_FILES})
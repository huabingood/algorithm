cmake_minimum_required(VERSION 3.8)
project(algorithm)


set(CMAKE_C_STANDARD 99)

# 链接库文件，否则编译时会找不到指定的库
# 这个语句的意思是给整个工程链接数需库
LINK_LIBRARIES(m)   # 数学库的libm.so简写成就是m


# 其中CPractise是文件家，CPractise.h是文件夹中的文件。必须指定文件所在的文件夹
# 在这个set里面，写出要编译的每个文件，不写的话，就不会被gcc编译。

# 设置变量，防止编译是引用的文件过长
# 这个设置CPractise这个文件夹中的所有文件
set(CPractiseFiles CPractise/BasicDataStructureTypePractise.c CPractise/CPractise.h CPractise/ControlStructure.c CPractise/PointerAndSource.c)

# 这个是设置algorithm文件夹下introduction中的所有文件
set(introduction algorithm/introduction/maxSubsequenceResult.c algorithm/introduction/introduction.h)

set(SOURCE_FILES main.c ${CPractiseFiles} ${introduction})

# 开始编译
add_executable(algorithm ${SOURCE_FILES})
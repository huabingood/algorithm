cmake_minimum_required(VERSION 3.8)
project(algorithm)


set(CMAKE_C_STANDARD 99)

# 链接库文件，否则编译时会找不到指定的库
# 这个语句的意思是给整个工程链接数需库
LINK_LIBRARIES(m)   # 数学库的libm.so简写成就是m


####################################
# 这里面的内容都是关于算法的        #
####################################

# 其中CPractise是文件夹，CPractise.h是文件夹中的文件。必须指定文件所在的文件夹
# 在这个set里面，写出要编译的每个文件，不写的话，就不会被gcc编译。

# 设置变量，防止编译是引用的文件过长
# 这个设置CPractise这个文件夹中的所有文件
# 这里的CPractiseFiles 实际上就是这个set的名字，方便系统编译时调用
# 这里的路径最好给出绝对路径，头文件也必须给出
set(CPractiseFiles CPractise/BasicDataStructureTypePractise.c CPractise/CPractise.h CPractise/ControlStructure.c CPractise/PointerAndSource.c CPractise/GuessAge.c CPractise/LeapYear.c CPractise/LeapYearPlus.c)

# 这个是设置algorithm文件夹下introduction中的所有文件
set(introduction algorithm/introduction/maxSubsequenceResult.c algorithm/introduction/introduction.h)

# 这个是设置algorithm中的chapter1中所有练习的文件
set(chapter1 algorithm/chapter1/chapter1.h algorithm/chapter1/ChickenAndRubbites.c)



####################################
# 这里面的内容都是关于C语言的练习的  #
####################################

# 这个是关于数组练习的所有内容
set(MyArray MyArray/MyArray.h MyArray/RubbitesOfFibonacci.c MyArray/MaxAndMinScore.c)

# 这个是编译上面两个分的CPractise 和 introduction 的
set(SOURCE_FILES main.c ${CPractiseFiles} ${introduction} ${chapter1} ${MyArray})

# 开始编译
add_executable(algorithm ${SOURCE_FILES})
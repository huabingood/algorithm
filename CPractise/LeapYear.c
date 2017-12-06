//
// Created by huabingood on 12/6/17.
//

# include <stdio.h>
# include <math.h>

/*题目内容：

从键盘输入你的出生年和今年的年份，编程判断并输出从你的出生年到今年之间中有多少个闰年。

程序的运行结果示例1：

Input your birth year:2000↙

Input this year:2020↙

2000

2004

2008

2012

2016

2020

count=6


输入提示信息："Input your birth year:"

输入提示信息："Input this year:"

输入格式："%d"

输出格式：

闰年年份： "%d\n"

闰年总数："count=%d\n"*/

void leapYear() {
    int birth, nowyear, count = 0;
    printf("Input your birth year:");
    scanf("%d", &birth);
    printf("Input this year:");
    scanf("%d", &nowyear);

    for (birth; birth <= nowyear; birth++) {
        if (birth % 4 == 0 || birth % 400 == 0) {
            printf("%d\n", birth);
            count++;
        }
    }

    printf("count=%d\n", count);


}

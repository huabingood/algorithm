//
// Created by huabingood on 12/6/17.
//

# include <stdio.h>

/*题目内容：

假设人的心率为每分钟跳75下，编程从键盘输入你的出生年和今年的年份，然后以年为单位计算并输出从你出生开始到目前为止的生命中已有的心跳总数（要求考虑闰年）。


程序运行结果示例1：

Input your birth year:1986↙

Input this year:2016↙

The heart beats in your life: 1183356000


输入提示信息："Input your birth year:"

输入提示信息："Input this year:"

输入格式:"%d"

输出格式："The heart beats in your life: %lu"*/

void leapYearPlus() {
    int birth, nowyear;
    long heartBeat = 0;
    printf("Input your birth year:");
    scanf("%d", &birth);
    printf("Input this year:");
    scanf("%d", &nowyear);

    for (birth; birth < nowyear; birth++) {
        if (birth % 4 == 0 || birth % 400 == 0) {
            //heartBeat+=75*60*24*366;
        }
        heartBeat += 75 * 60 * 24 * 365;
    }

    printf("The heart beats in your life: %lu", heartBeat);
}


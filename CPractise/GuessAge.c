//
// Created by huabingood on 12/6/17.
//

// 猜神童年龄
#include <stdio.h>
#include <math.h>

/*题目内容：
美国数学家维纳（N.Wiener）智力早熟，11岁就上了大学。他曾在1935~1936年应邀来中国清华大学讲学。一次，他参加某个重要会议，年轻的脸孔引人注目。于是有人询问他的年龄，他回答说：“我年龄的立方是一个4位数。我年龄的4次方是一个6位数。这
10个数字正好包含了从0到9这10个数字，每个都恰好出现1次。”请你编程算出他当时到底有多年轻。
【解题思路】：因为已知年龄的立方是一个4位数字，所以可以推断年龄的范围在10到22之间，因此确定穷举范围为10到22。如果年龄还满足“年龄的4次方是一个6位数”这个条件，则先计算年龄的立方值的每一位数字，从低位到高位分别保存到变量b1,b2,b3,b4
中，再计算年龄的4次方值的每一位数字，从低位到高位分别保存到变量a1,a2,a3,a4,a5,a6中。如果上述10个数字互不相同，则必定是包含了从0到9这10个数字并且每个都恰好出现1次，因此只要判断上述10个数字互不相同，即可确定这个年龄值为所求。

输出格式："age=%d\n"*/


void guessAge() {
    unsigned int four, six;
    int splitNum[10];

    // 根据提示穷举这个年龄的所有可能
    for (int age = 18; age < 23; age++) {
        four = pow(age, 3);
        six = pow(age, 4);

        // 将你年龄的3,4次方的结果解析出来输入到数组中
        for (int i = 0; i < 10; i++) {
            // 拆分4位数
            if (i > 5) {
                splitNum[i] = four % 10;
                four = four / 10;
            } else {
                // 拆分6位数
                splitNum[i] = six % 10;
                six = six / 10;
            }
        }

        // 对比各个数是否相等
        // C中的跳出只能跳出一层循环，和java中完全不一样
        /*for (int i = 0; i < 10; i++) {
            for (int j = i + 1; j < 10; j++) {
                if (splitNum[i] == splitNum[j]) {
                    continue;
                }
            }
        }*/

        int flag = 1, i = 0;
        while (flag == 1) {

            for (int j = i + 1; j < 10; j++) {
                if (splitNum[i] == splitNum[j]) {
                    flag = -1;
                    break;
                }
            }

            if (flag != -1) {
                printf("age=%d\n", age);
                flag = -1;
                break;
            }

            i++;
        }


    }

}

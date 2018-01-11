//
// Created by huabingood on 1/9/18.
//

# include <stdio.h>

# define STUDENTS 40

/*问题描述：
 * 从键盘中输入全班的人数，不超过40人
 * 从键盘中输入这些人的成绩，并对成绩作出判断（0<=score<=100）
 * 从分数中查处分数最低和最高的学生。
 * */

void MaxAndMinScore() {
    short a = 0;
    char flag = '1';

    // 判断用户的输入是否合法，如果不合法继续输入
    while (flag < '2') {
        printf("请输入班级的人数：");
        scanf("%d", &a);
        if (a > 0 & a <= 40) {
            flag = '3';
        } else {
            printf("输入数据非法，请重新输入。\n");
        }
    }
}
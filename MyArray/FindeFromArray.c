//
// Created by huabingood on 1/11/18.
//


/*问题描述：
 * 从键盘中输入全班的人数，不超过40人
 * 从键盘中输入这些人的学号与成绩，并对成绩作出判断（0<=score<=100）
 * 从分数中查找到某个学号的成绩
 * 假设学号是4位数，即学号为 1000 到 9999 。
 * */


# include <stdio.h>

# define MAXSTUDENTS 40


void findFromArray() {

    // 输入班级的人数并判断
    short students = 0;
    short allStudents[MAXSTUDENTS] = {0};
    short studentsNum[MAXSTUDENTS] = {0};
    char numFlag = '1';

    while (numFlag < '2') {
        printf("请输入班级学生的人数(0,40]：\n");
        scanf("%d", &students);
        if (students <= 0 || students > 40) {
            printf("您输入的学生范围有误。\n");
        } else {
            numFlag = '2';
        }
    }

    // 输入学生的学号和成绩,不对学号成绩进行判断
    short controlFlag = 0;
    while (controlFlag < students) {
        printf("输入第%d个学生的学号和成绩，中间使用空格分割:\n", controlFlag+1);
        scanf("%d%d", &studentsNum[controlFlag],&allStudents[controlFlag]);
        controlFlag++;
    }

    // 调用函数进行二分查找
    int result = binSearch(students-1,allStudents,4);
    printf("学生的学号是：%d,学生的成绩%d.",studentsNum[result],allStudents[result]);
}

/*
 * 折半查找
 * 默认输入的成绩已经是排好序的
 * */
int binSearch(int right, short allStudents[],int score) {
    int left = 0;
    int middle =0;   // 只能在一定程度上防止溢出，且假设全部都是正数的基础上

    while(left<right){
        middle=left-(left-right)/2;
        if(allStudents[middle]<score){
            left = middle+1;
        }else if(allStudents[middle]>score){
            right = middle-1;
        }else{
            return middle;
        }
    }
    return -1;
}
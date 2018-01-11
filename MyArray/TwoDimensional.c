//
// Created by huabingood on 1/11/18.
//

/**
 * 题目要求：
 * 某班其中考试的科目为数学（MT），英语（EN），物理(PH)
 * 最多不超过30人考试
 * 假设学生的学号是4位，1000-9999
 * 输出学号，各科分数，总分和平均分，并表示出三门功课均在90分的同学（用Y和N标记）
 */

/*输入与输出
请输入学生人数:
3
请输入学生的学号，数学成绩，英语成绩，物理成绩。最大不超过30人
9901
97
87
92
9902
92
91
90
9903
90
81
82
----This is print1.----
学号	数学	英语	物理	总分	平均分	>90
9901	97	87	92	276	92.00	N
9902	92	91	90	273	91.00	Y
9903	90	81	82	253	84.33	N*/

# include <stdio.h>
#define STUDENTS 30
#define COURSE 4

short inputNum(short num,short score1[][COURSE]);
void myPrint1(short num,short score[][COURSE]);


void twoDimensionalArray(){
    short num = 0;
    short score[STUDENTS][COURSE] ;
    // num  = inputNum(num,score[COURSE][STUDENTS]); // 这中写法是错误的，因为二维数组只传递参数名即可，不必在加后面的长度

    num = inputNum(num,score);

    myPrint1(num,score);
}



short inputNum(short num,short score[][COURSE]){
    printf("请输入学生人数:\n");
    scanf("%d",&num);
    printf("请输入学生的学号，数学成绩，英语成绩，物理成绩。最大不超过30人\n");

    for(int i=0;i<num;i++){
        for(int j = 0;j<COURSE;j++){
            scanf("%d",&score[i][j]);
        }
    }
    return num;
}

void myPrint1(short num,short score[][COURSE]){

    printf("----This is print1.----\n");
    printf("学号\t数学\t英语\t物理\t总分\t平均分\t>90\n");
    for(int i = 0;i<num;i++){
        int sum =0;
        float avg=0;
        char c = 'Y';

        for(int j = 0;j<COURSE;j++){
            printf("%d\t",score[i][j]);
            // 将学号排除掉
            if (j!=0) {
                sum += score[i][j];
                avg = (float)sum / (COURSE-1);
                // 只要有一门分数不满90,肯定是N
                if (score[i][j] < 90) {
                    c = 'N';
                }
                // 在最后一次循环输出总数，均值，等级信息
                if (j == COURSE - 1) {
                    printf("%d\t%.2f\t%c", sum, avg, c);
                }
            }
        }
        printf("\n");
    }
}

void myPrint2(){}







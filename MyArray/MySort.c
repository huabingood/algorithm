//
// Created by huabingood on 1/10/18.
//

/*需求：
 * 键盘输入某班的人数（最多不超过40人）
 * 分数的限制是（0,100）
 * 将学生的分数从高到低输出
 * */


# include <stdio.h>
# define STUDENTS 40


void mySort(){
    short myScore[STUDENTS]={0};
    short myStudents = 0;
    char flag = '1';

    // 让用户输入数据,并判断输入的数据是否合法
    while(flag<'2'){
        printf("请输入学生的人数，学生的人数在（0,40）。\n");
        scanf("%d",&myStudents);
        if(myStudents<=0 || myStudents>=40){
            printf("输入的学生成绩不合法！！！\n");
        } else{
            flag='2';
        }
    }

    //循环遍历让用户输入学生的成绩
    short i = 0;
    while(i<myStudents){
        printf("请输入第%d个学生的成绩：\n",i+1);
        scanf("%d",&myScore[i]);
        if(myScore[i]<=0 & myScore[i]>100){
            printf("您输入的成绩不合法，请重新输入。");
        }else{
            i++;
        }
    }

    // 调用函数进行排序
    //myExchang(myScore,myStudents);
    selectSort(myScore,myStudents);

    // 输出内容
    printf("学生的分数降序为：\n");
    for(int i=0;i<myStudents;i++){
        printf("%d\t",myScore[i]);
    }
}

/*交换排序法
 * 使用冒泡排序找出最小的那个，然后一次类推*/

void myExchang(short myScore[],short myStudents){
    short middle = 0;
    for(int i = 0;i<myStudents;i++){
        for(int j=i+1;j<myStudents;j++){
            if(myScore[i]<myScore[j]){
                middle = myScore[i];
                myScore[i] = myScore[j];
                myScore[j] = middle;
            }
        }

    }
}

/*选择排序
 * 就是将最大值的下标一直拿着，然后再和第一个替换。
 * 其实这里的循环次数没有变换，仅仅是省掉内层for循环的交换过程
 * */
void selectSort(short myScore[],short myStudents){
    short middleIndex = 0;
    short middleValue = 0;
    for(int i=0;i<myStudents;i++){
        for(int j=i+1;j<myStudents;j++){
            if(myScore[i]<myScore[j]){
                middleIndex=j;  // 获取最大值的索引
            }
        }
        // 在内层循环外实现交换
        if(middleIndex != i){
            middleValue = myScore[i];
            myScore[i]=myScore[middleIndex];
            myScore[middleIndex]=middleValue;
        }
    }
}





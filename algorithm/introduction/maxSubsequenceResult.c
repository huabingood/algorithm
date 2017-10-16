//
// Created by huabingood on 17-10-15.
//
# include <stdio.h>


/*
 * 最大子列和
 * 给定一串连数字，然后求从该数字串的任意一位起开始计算任意长度数字的和
 * 最后求这些和中最打的值
 */


// 实际上就是遍历所有可能的子列和，然后求最大的值
// 这种算法其实已经做过优化了。没有多余的便利情况
void mathod1() {
    // 定义一个数组
    int sequence[] = {-1, 2, -3};
    // 计算数组长度
    int length = sizeof(sequence) / sizeof(unsigned int); \
    int maxSubsquence = 0;

    // 第一层循环，控制数组的遍历
    for (int i = 0; i < length; i++) {
        // 第二层循环，控制当前数组内的所有子列
        for (int j = i; j <= length; j++) {  // 这里（int j = 0;j<=i;j++）的算法中间多余和多步
            int thisSum = 0;  // 不赋初始值的话，C中的int值是随机生成的。
            // 开始求子列和
            for (int k = i; k < j; k++) {

                thisSum += sequence[k];

            }
            // 应该放在最后一层for循环外边，只有求出的和才会被赋值。
            if (thisSum > maxSubsquence) {
                maxSubsquence = thisSum;
            }
        }
    }

    printf("%d\n", maxSubsquence);

}


// 实际上就是将求和的过程放到循环体内，这样每次就是单独加，又是遍历求和
void mathod2() {
    int sequence[] = {-1, 2, -3};
    int length = sizeof(sequence) / sizeof(unsigned int);
    int maxSum = 0;
    for (int i = 0; i < length; i++) {
        int thisSum = 0;
        for (int j = i; j < length; j++) {
            thisSum += sequence[j];
            // 与方法一的区别点在于将判断放到了循环体内。
            if (thisSum > maxSum) {
                maxSum = thisSum;
            }
        }

    }
    printf("%d\n", maxSum);
}
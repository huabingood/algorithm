//
// Created by huabingood on 17-10-11.
//
# include <stdio.h>

// 新建函数hyw()
int hyw() {
    // printf("aaa");
    return 1;
}

// practise the scan IO;
void scanIO() {
    char ch;
    // 实际上在C语言中，char是占一个字节的，而java中，char是占两个字节的
    char zhongwen = '中';  // 这个时候的输出是错误的
    printf("%c \n", zhongwen);
    float f = sizeof(zhongwen);
    // 注意这里也是个坑，如果直接输出的是sizeof就会发现，输出的是错误的。
    printf("%3.2f \n", f);

    // 下面这个句子是错误的，由此可见这个unsigned等修饰符都是int的
    // long double ld = 34.0;
    double ld = 34.0;
    printf("这个输出的是long double的结果：%f \n", ld);

    printf("please input on character into the scan.");
    ch = getchar();

    printf("you print is %c", ch);
}

// printf() method practise
void myPrintf() {
    float f = 3.4567f;
    long l = 123456l;
    printf("%2.1f\n", f);

    printf("the long type was given length 3.the fact is %8d.\n", l);
}

// scanf() practise
void myScanf() {
    // 必须紧挨着才能被识别，空格或其他的输入符号会被作为一个输入符号而识别
    char a, b, c;
    // scanf("%c%c%c",&a,&b,&c);
    // printf("you write is %c,%c,%c.",a,b,c);

    // this use space to split
    // scanf("%c %c %c",&a,&b,&c);
    // printf("you write is %c,%c,%c.\n",a,b,c);

    // use the comma to split the input
    scanf("%c,%c,%c", &a, &b, &c);
    printf("you write is %c,%c,%c.\n", a, b, c);
}